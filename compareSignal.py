import sys
from ROOT import *

if not len(sys.argv) == 2:
    print 'Usage compareSignal.py <root file>'
    exit()

gROOT.SetBatch(1)

c = TCanvas("c","c",900,600)

f0 = TFile.Open(sys.argv[1])
for cutkey in f0.GetListOfKeys():
    cut = cutkey.GetName()
    cutdir = f0.Get(cut)
    for varkey in cutdir.GetListOfKeys():
        var = varkey.GetName()
        histdir = cutdir.Get(var)
        h_ggH = histdir.Get('histo_ggH_hww')
        h_VBF = histdir.Get('histo_qqH_hww')
        h_ggH.SetLineWidth(2)
        h_VBF.SetLineColor(2)
        h_VBF.SetLineWidth(2)
        h_ggH.Scale(1/h_ggH.Integral())
        h_VBF.Scale(1/h_VBF.Integral())
        h_ggH.Draw("hist")
        h_VBF.Draw("hist same")
        leg = TLegend(0.6,0.6,0.8,0.8)
        leg.AddEntry(h_ggH,"ggH","l")
        leg.AddEntry(h_VBF,"VBF","l")
        c.SaveAs("compareSignal_"+cut+"_"+var+".pdf")

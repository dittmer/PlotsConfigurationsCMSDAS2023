import sys
from ROOT import *

if not len(sys.argv) == 6:
    print 'Usage compareSignal.py <root file> <cut> <variable> <nuisance> <sample>'
    exit()

gROOT.SetBatch(1)

rootFile = sys.argv[1]
cut      = sys.argv[2]
variable = sys.argv[3]
nuisance = sys.argv[4]
sample   = sys.argv[5]

c = TCanvas("c","c",900,600)

f0 = TFile.Open(rootFile)
hnom = f0.Get(cut+'/'+variable+'/histo_'+sample)
hup = f0.Get(cut+'/'+variable+'/histo_'+sample+'_'+nuisance+'Up')
hdo = f0.Get(cut+'/'+variable+'/histo_'+sample+'_'+nuisance+'Down')
hnom.SetLineWidth(2)
hup.SetLineWidth(2)
hdo.SetLineWidth(2)
hup.SetLineColor(2)
hdo.SetLineColor(4)
hup.Draw("hist")
hdo.Draw("hist same")
leg = TLegend(0.6,0.6,0.8,0.8)
leg.AddEntry(hnom,"Nom","l")
leg.AddEntry(hup,nuisance+"Up","l")
leg.AddEntry(hdo,nuisance+"Down","l")
c.SaveAs("compare_"+nuisance+'_'+cut+"_"+variable+"_"+sample+".pdf")

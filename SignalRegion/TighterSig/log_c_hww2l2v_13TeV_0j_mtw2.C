void log_c_hww2l2v_13TeV_0j_mtw2()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_0j_mtw2/cc
//=========  (Thu Jan 12 11:25:46 2023) by ROOT version 6.14/09
   TCanvas *cchww2l2v_13TeV_0j_mtw2 = new TCanvas("cchww2l2v_13TeV_0j_mtw2", "cc",1,1,800,576);
   gStyle->SetOptFit(1);
   float YMin = 0.001; 
   float YMax = 100000000; 
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_0j_mtw2->SetHighLightColor(2);
   cchww2l2v_13TeV_0j_mtw2->Range(-40,-3.289006,210,6.626426);
   cchww2l2v_13TeV_0j_mtw2->SetFillColor(0);
   cchww2l2v_13TeV_0j_mtw2->SetBorderMode(0);
   cchww2l2v_13TeV_0j_mtw2->SetBorderSize(2);
   cchww2l2v_13TeV_0j_mtw2->SetLogy();
   cchww2l2v_13TeV_0j_mtw2->SetTickx(1);
   cchww2l2v_13TeV_0j_mtw2->SetTicky(1);
   cchww2l2v_13TeV_0j_mtw2->SetLeftMargin(0.16);
   cchww2l2v_13TeV_0j_mtw2->SetRightMargin(0.04);
   cchww2l2v_13TeV_0j_mtw2->SetTopMargin(0.05);
   cchww2l2v_13TeV_0j_mtw2->SetBottomMargin(0.13);
   cchww2l2v_13TeV_0j_mtw2->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0j_mtw2->SetFrameBorderMode(0);
   cchww2l2v_13TeV_0j_mtw2->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0j_mtw2->SetFrameBorderMode(0);
   
   TH1F *hframe__1003 = new TH1F("hframe__1003","",1000,0,200);
   hframe__1003->SetMinimum(YMin);
   hframe__1003->SetMaximum(YMax);
   hframe__1003->SetDirectory(0);
   hframe__1003->SetStats(0);
   hframe__1003->SetLineStyle(0);
   hframe__1003->SetMarkerStyle(20);
   hframe__1003->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   hframe__1003->GetXaxis()->SetNdivisions(506);
   hframe__1003->GetXaxis()->SetLabelFont(42);
   hframe__1003->GetXaxis()->SetLabelOffset(0.007);
   hframe__1003->GetXaxis()->SetLabelSize(0.05);
   hframe__1003->GetXaxis()->SetTitleSize(0.06);
   hframe__1003->GetXaxis()->SetTitleOffset(0.9);
   hframe__1003->GetXaxis()->SetTitleFont(42);
   hframe__1003->GetYaxis()->SetTitle("Events / 10 GeV");
   hframe__1003->GetYaxis()->SetLabelFont(42);
   hframe__1003->GetYaxis()->SetLabelOffset(0.007);
   hframe__1003->GetYaxis()->SetLabelSize(0.05);
   hframe__1003->GetYaxis()->SetTitleSize(0.06);
   hframe__1003->GetYaxis()->SetTitleOffset(1.25);
   hframe__1003->GetYaxis()->SetTitleFont(42);
   hframe__1003->GetZaxis()->SetLabelFont(42);
   hframe__1003->GetZaxis()->SetLabelOffset(0.007);
   hframe__1003->GetZaxis()->SetLabelSize(0.05);
   hframe__1003->GetZaxis()->SetTitleSize(0.06);
   hframe__1003->GetZaxis()->SetTitleFont(42);
   hframe__1003->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_0j_mtw2 = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->SetName("thsBackground_grouped_hww2l2v_13TeV_0j_mtw2");
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->SetTitle("thsBackground_grouped_hww2l2v_13TeV_0j_mtw2");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603","thsBackground_grouped_hww2l2v_13TeV_0j_mtw2",20,0,200);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->SetMinimum(1.801329);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->SetMaximum(7205.315);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_0j_mtw2_stack_601_stack_603);
   
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1 = new TH1D("new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1","histo_top",20,0,200);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(4,326.532);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(5,435.4743);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(6,557.5171);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(7,664.4496);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(8,683.2343);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(9,601.4784);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(10,445.7703);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(11,285.8803);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(12,182.468);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(13,103.0722);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(14,58.90277);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(15,27.87646);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(16,14.23066);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(17,7.426916);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(18,3.933269);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(19,2.174305);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(20,1.246215);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinContent(21,3.337335);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(4,6.971389);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(5,8.255813);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(6,9.318696);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(7,10.34555);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(8,10.7133);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(9,9.836494);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(10,8.494895);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(11,6.850173);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(12,5.315397);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(13,4.078388);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(14,2.887184);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(15,1.990427);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(16,1.374667);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(17,0.9735732);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(18,0.6560658);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(19,0.4796783);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(20,0.322148);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetBinError(21,0.6023199);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetEntries(47494);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 2191;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetYaxis()->SetTitleOffset(0);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Add(new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2","histo_WWewk",20,0,200);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(4,1045.734);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(5,1767.849);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(6,2572.786);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(7,2917.108);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(8,2768.502);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(9,2188.636);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(10,1395.78);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(11,742.8329);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(12,334.3295);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(13,137.2616);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(14,65.60211);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(15,30.61503);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(16,18.57094);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(17,10.2125);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(18,7.552676);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(19,6.401236);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(20,3.767427);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinContent(21,13.01993);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(4,9.811171);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(5,12.69826);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(6,15.30185);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(7,16.18924);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(8,15.81083);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(9,13.85591);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(10,11.00178);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(11,8.022661);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(12,5.290842);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(13,3.37281);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(14,2.352233);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(15,1.604623);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(16,1.226892);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(17,0.9229347);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(18,0.7897662);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(19,0.7695231);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(20,0.5646963);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetBinError(21,1.025862);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetEntries(262228);

   ci = 2192;
   color = new TColor(ci, 0.6, 0.8, 1, " ", 0.6);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetYaxis()->SetTitleOffset(0);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Add(new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2,"");
   
   TH1D *new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3 = new TH1D("new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3","histo_Fake",20,0,200);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(4,512.7672);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(5,685.9621);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(6,589.2865);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(7,447.62);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(8,331.5676);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(9,196.5996);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(10,74.98119);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(11,29.81803);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(12,13.81551);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(13,2.597912);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(14,2.439785);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(15,1.072136);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(16,1.843566);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(17,1.290322);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(18,0.7540524);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(19,-0.3073903);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(20,-0.06675102);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinContent(21,1.328378);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(4,20.14228);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(5,24.24228);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(6,24.07848);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(7,22.79708);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(8,20.43372);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(9,16.85609);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(10,12.32251);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(11,8.4952);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(12,5.883533);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(13,3.41155);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(14,2.549374);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(15,1.859008);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(16,1.338861);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(17,1.375228);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(18,1.056918);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(19,0.4284965);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(20,0.2284324);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetBinError(21,1.258956);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetEntries(98532);

   ci = 2193;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.6);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->SetLineColor(ci);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetYaxis()->SetTitleOffset(0);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Add(new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3,"");
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4","histo_DY",20,0,200);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(4,84.98115);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(5,65.0964);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(6,46.27696);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(7,24.72432);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(8,10.44087);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(9,4.367358);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(10,2.363571);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(11,0.6887012);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(12,0.6430227);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(13,0.3141319);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(14,0.1053042);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(15,0.3127528);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(16,0.1295742);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(18,0.06100254);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinContent(21,0.4652744);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(4,2.787215);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(5,2.535483);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(6,1.851966);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(7,1.517062);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(8,0.8353241);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(9,0.6120032);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(10,0.3377759);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(11,0.173418);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(12,0.2102803);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(13,0.1130184);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(14,0.07044481);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(15,0.1309912);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(16,0.07597417);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(18,0.06100254);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetBinError(21,0.1661104);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetEntries(11908);

   ci = 2194;
   color = new TColor(ci, 0, 0.6, 0, " ", 0.6);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetYaxis()->SetTitleOffset(0);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Add(new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5","histo_VVV",20,0,200);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(4,1.146721);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(5,1.254665);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(6,1.939586);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(7,2.332958);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(8,2.655409);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(9,1.943639);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(10,1.320539);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(11,1.231389);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(12,1.03136);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(13,0.2686881);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(14,0.4636046);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(15,0.2659481);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(16,0.2598098);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(17,0.1067915);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(18,0.08743192);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(19,0.283211);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(20,0.1939238);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinContent(21,0.5321711);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(4,0.2515407);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(5,0.2599168);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(6,0.3239669);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(7,0.3476547);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(8,0.386855);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(9,0.3281098);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(10,0.2863178);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(11,0.2500523);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(12,0.2422508);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(13,0.1511182);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(14,0.1374356);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(15,0.1199376);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(16,0.152421);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(17,0.06460809);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(18,0.1013084);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(19,0.1195307);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(20,0.1128353);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetBinError(21,0.1598958);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetEntries(444);

   ci = 2195;
   color = new TColor(ci, 0, 0.4, 1, " ", 0.6);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetYaxis()->SetTitleOffset(0);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Add(new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6","histo_VZ",20,0,200);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(4,2.711068);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(5,3.831235);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(6,3.754084);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(7,3.025727);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(8,2.283433);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(9,1.588156);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(10,0.8513583);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(11,0.3867433);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(12,0.1870419);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(13,0.1000049);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(14,0.05308644);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(15,0.03273641);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(16,0.02320359);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(17,0.02378619);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(18,0.0154975);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(19,0.01431898);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(20,0.006051157);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinContent(21,0.03175182);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(4,0.05832836);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(5,0.05975249);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(6,0.05917004);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(7,0.05142137);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(8,0.04649112);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(9,0.0373777);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(10,0.02770215);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(11,0.0183317);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(12,0.01331389);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(13,0.009264965);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(14,0.006845641);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(15,0.005351177);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(16,0.004387708);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(17,0.004625732);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(18,0.003431858);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(19,0.003807915);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(20,0.002187257);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetBinError(21,0.005098946);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetEntries(40477);

   ci = 2196;
   color = new TColor(ci, 0.8, 0, 0.8, " ", 0.6);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetYaxis()->SetTitleOffset(0);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Add(new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6,"");
   
   TH1D *new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7 = new TH1D("new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7","histo_Vg",20,0,200);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(4,37.29053);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(5,117.2986);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(6,100.2355);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(7,72.23541);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(8,47.2611);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(9,31.00424);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(10,10.28523);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(11,7.772883);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(12,3.880845);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(13,0.388686);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(14,9.546654);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(15,0.4494304);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(18,0.421401);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinContent(21,0.4140081);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(4,11.08867);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(5,21.07852);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(6,19.10361);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(7,16.17914);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(8,13.19462);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(9,9.844312);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(10,6.035967);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(11,4.454078);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(12,3.880845);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(13,0.388686);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(14,6.160236);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(15,0.3455582);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(18,0.421401);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetBinError(21,0.4140081);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetEntries(538);

   ci = 2197;
   color = new TColor(ci, 1, 0.2, 0, " ", 0.6);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff3300");
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->SetLineColor(ci);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetYaxis()->SetTitleOffset(0);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Add(new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7,"");
   
   TH1D *new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8 = new TH1D("new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8","histo_VgS_L",20,0,200);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(4,80.41956);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(5,160.3483);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(6,166.4255);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(7,135.928);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(8,107.9074);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(9,61.52145);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(10,33.37361);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(11,13.019);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(12,7.112527);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(13,2.361287);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(14,1.499348);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(15,0.9415979);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(16,0.4186846);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(17,0.3484772);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(18,0.3139225);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(19,0.3135408);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(20,0.1231287);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinContent(21,0.7355154);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(4,3.545353);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(5,11.3127);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(6,11.559);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(7,7.838034);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(8,7.1153);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(9,1.403503);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(10,3.496784);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(11,0.6171762);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(12,0.4620299);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(13,0.2573712);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(14,0.2090585);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(15,0.1674253);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(16,0.1121324);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(17,0.09928405);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(18,0.09421079);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(19,0.09804318);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(20,0.0577486);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetBinError(21,0.1399777);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetEntries(31431);

   ci = 2198;
   color = new TColor(ci, 0.4, 1, 0.4, " ", 0.6);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ff66");
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->SetLineColor(ci);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetXaxis()->SetLabelFont(42);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetXaxis()->SetTitleFont(42);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetYaxis()->SetLabelFont(42);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetYaxis()->SetTitleOffset(0);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetYaxis()->SetTitleFont(42);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetZaxis()->SetLabelFont(42);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Add(new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9","histo_WH_hww",20,0,200);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(4,87.1683);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(5,176.1718);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(6,257.644);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(7,235.8977);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(8,143.0028);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(9,59.83646);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(10,19.75611);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(11,5.194843);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(12,1.609994);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(13,0.7847591);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(14,0.3651198);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(15,0.3038355);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(16,0.2790801);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(17,0.2422071);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(18,0.09457111);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(19,0.1000211);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(20,0.08189845);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinContent(21,0.4123753);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(4,2.333414);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(5,3.342801);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(6,4.122111);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(7,3.901144);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(8,3.025122);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(9,1.929381);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(10,1.089376);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(11,0.4869611);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(12,0.2064455);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(13,0.1173963);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(14,0.06208174);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(15,0.05195983);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(16,0.04918594);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(17,0.05503742);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(18,0.0241596);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(19,0.02572591);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(20,0.02728215);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetBinError(21,0.06420017);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetEntries(86705);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetYaxis()->SetTitleOffset(0);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Add(new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9,"");
   //thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Draw("same");
   //thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->GetYaxis()->SetRange( RatioYMin, RatioYMax);
   thsBackground_grouped_hww2l2v_13TeV_0j_mtw2->Draw("hist same");
   
   THStack *thsSignal_grouped_hww2l2v_13TeV_0j_mtw2 = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2->SetName("thsSignal_grouped_hww2l2v_13TeV_0j_mtw2");
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2->SetTitle("thsSignal_grouped_hww2l2v_13TeV_0j_mtw2");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604","thsSignal_grouped_hww2l2v_13TeV_0j_mtw2",20,0,200);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->SetMinimum(0.1047064);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->SetMaximum(418.8257);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_0j_mtw2_stack_602_stack_604);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1","histo_WH_hww",20,0,200);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(4,87.1683);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(5,176.1718);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(6,257.644);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(7,235.8977);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(8,143.0028);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(9,59.83646);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(10,19.75611);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(11,5.194843);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(12,1.609994);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(13,0.7847591);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(14,0.3651198);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(15,0.3038355);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(16,0.2790801);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(17,0.2422071);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(18,0.09457111);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(19,0.1000211);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(20,0.08189845);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinContent(21,0.4123753);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(4,2.333414);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(5,3.342801);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(6,4.122111);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(7,3.901144);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(8,3.025122);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(9,1.929381);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(10,1.089376);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(11,0.4869611);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(12,0.2064455);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(13,0.1173963);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(14,0.06208174);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(15,0.05195983);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(16,0.04918594);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(17,0.05503742);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(18,0.0241596);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(19,0.02572591);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(20,0.02728215);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetBinError(21,0.06420017);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetEntries(86705);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetYaxis()->SetTitleOffset(0);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2->Add(new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1,"");
   thsSignal_grouped_hww2l2v_13TeV_0j_mtw2->Draw("hist same noclear");
   
   Double_t _fx4003[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t _fy4003[20] = {
   0,
   0,
   0,
   2091.582,
   3237.115,
   4038.221,
   4267.424,
   3953.852,
   3087.139,
   1964.726,
   1081.63,
   543.4678,
   246.3646,
   138.6127,
   61.56609,
   35.47644,
   19.40879,
   13.13925,
   8.879222,
   5.269994};
   Double_t _felx4003[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely4003[20] = {
   0,
   0,
   0,
   26.34263,
   37.36138,
   37.4547,
   34.84901,
   31.74696,
   25.92748,
   19.84701,
   14.27477,
   10.30728,
   6.316707,
   7.640959,
   3.189285,
   2.286727,
   1.924826,
   1.540026,
   1.014781,
   0.7006526};
   Double_t _fehx4003[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy4003[20] = {
   0,
   0,
   0,
   26.34263,
   37.36138,
   37.4547,
   34.84901,
   31.74696,
   25.92748,
   19.84701,
   14.27477,
   10.30728,
   6.316707,
   7.640959,
   3.189285,
   2.286727,
   1.924826,
   1.540026,
   1.014781,
   0.7006526};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx4003,_fy4003,_felx4003,_fehx4003,_fely4003,_fehy4003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph40014003 = new TH1F("Graph_Graph_Graph40014003","",100,0,220);
   Graph_Graph_Graph40014003->SetMinimum(0);
   Graph_Graph_Graph40014003->SetMaximum(4732.5);
   Graph_Graph_Graph40014003->SetDirectory(0);
   Graph_Graph_Graph40014003->SetStats(0);
   Graph_Graph_Graph40014003->SetLineStyle(0);
   Graph_Graph_Graph40014003->SetMarkerStyle(20);
   Graph_Graph_Graph40014003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph40014003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph40014003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph40014003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph40014003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph40014003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph40014003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph40014003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph40014003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph40014003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph40014003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph40014003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph40014003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph40014003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph40014003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph40014003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph40014003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph40014003);
   
   grae->Draw("2");
   
   Double_t Graph0_fx4004[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t Graph0_fy4004[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_felx4004[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph0_fely4004[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehx4004[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph0_fehy4004[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(20,Graph0_fx4004,Graph0_fy4004,Graph0_felx4004,Graph0_fehx4004,Graph0_fely4004,Graph0_fehy4004);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph040024004 = new TH1F("Graph_Graph_Graph040024004","Graph",100,0,220);
   Graph_Graph_Graph040024004->SetMinimum(0);
   Graph_Graph_Graph040024004->SetMaximum(1.1);
   Graph_Graph_Graph040024004->SetDirectory(0);
   Graph_Graph_Graph040024004->SetStats(0);
   Graph_Graph_Graph040024004->SetLineStyle(0);
   Graph_Graph_Graph040024004->SetMarkerStyle(20);
   Graph_Graph_Graph040024004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph040024004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph040024004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph040024004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph040024004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph040024004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph040024004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph040024004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph040024004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph040024004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph040024004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph040024004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph040024004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph040024004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph040024004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph040024004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph040024004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph040024004);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.65,0.8,0.88,NULL,"brNDC");
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetNColumns(2);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1","tW and t#bar{t} [4401.7]","F");

   ci = 2191;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2","WW [16013.5]","F");

   ci = 2192;
   color = new TColor(ci, 0.6, 0.8, 1, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#99ccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3","nonprompt [2892.0]","F");

   ci = 2193;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4","DY [240.5]","F");

   ci = 2194;
   color = new TColor(ci, 0, 0.6, 0, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5","VVV [16.8]","F");

   ci = 2195;
   color = new TColor(ci, 0, 0.4, 1, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0066ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6","VZ [18.9]","F");

   ci = 2196;
   color = new TColor(ci, 0.8, 0, 0.8, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cc00cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7","V#gamma [438.1]","F");

   ci = 2197;
   color = new TColor(ci, 1, 0.2, 0, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff3300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8","V#gamma* [772.4]","F");

   ci = 2198;
   color = new TColor(ci, 0.4, 1, 0.4, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#66ff66");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1","Higgs [988.5]","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0j_mtw2","Data [0.0]","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.96,"L = 59.7/fb (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.96,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.0475);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.272,0.96,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0361);
   tex->SetLineWidth(2);
   tex->Draw();
   
   //leg = new TLegend(0.2,0.65,0.8,0.88,NULL,"brNDC");
   //leg->SetTextSize(0.035);
   //leg->SetLineColor(0);
   //leg->SetLineStyle(1);
   //leg->SetLineWidth(1);
   //leg->SetFillColor(0);
   //leg->SetFillStyle(1001);
   //entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0j_mtw2_stack_1_stack_1","tW and t#bar{t} [4401.7]","F");

   //ci = 2191;
   //color = new TColor(ci, 1, 1, 0, " ", 0.6);
   //entry->SetFillColor(ci);
   //entry->SetFillStyle(1001);

   //ci = TColor::GetColor("#ffff00");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   //entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0j_mtw2_stack_2_stack_2","WW [16013.5]","F");

   //ci = 2192;
   //color = new TColor(ci, 0.6, 0.8, 1, " ", 0.6);
   //entry->SetFillColor(ci);
   //entry->SetFillStyle(1001);

   //ci = TColor::GetColor("#99ccff");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   //entry=leg->AddEntry("new_histo_group_Fake_hww2l2v_13TeV_0j_mtw2_stack_3_stack_3","nonprompt [2892.0]","F");

   //ci = 2193;
   //color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.6);
   //entry->SetFillColor(ci);
   //entry->SetFillStyle(1001);

   //ci = TColor::GetColor("#999999");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   //entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0j_mtw2_stack_4_stack_4","DY [240.5]","F");

   //ci = 2194;
   //color = new TColor(ci, 0, 0.6, 0, " ", 0.6);
   //entry->SetFillColor(ci);
   //entry->SetFillStyle(1001);

   //ci = TColor::GetColor("#009900");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   //entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0j_mtw2_stack_5_stack_5","VVV [16.8]","F");

   //ci = 2195;
   //color = new TColor(ci, 0, 0.4, 1, " ", 0.6);
   //entry->SetFillColor(ci);
   //entry->SetFillStyle(1001);

   //ci = TColor::GetColor("#0066ff");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   //entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0j_mtw2_stack_6_stack_6","VZ [18.9]","F");

   //ci = 2196;
   //color = new TColor(ci, 0.8, 0, 0.8, " ", 0.6);
   //entry->SetFillColor(ci);
   //entry->SetFillStyle(1001);

   //ci = TColor::GetColor("#cc00cc");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   //entry=leg->AddEntry("new_histo_group_Vg_hww2l2v_13TeV_0j_mtw2_stack_7_stack_7","V#gamma [438.1]","F");

   //ci = 2197;
   //color = new TColor(ci, 1, 0.2, 0, " ", 0.6);
   //entry->SetFillColor(ci);
   //entry->SetFillStyle(1001);

   //ci = TColor::GetColor("#ff3300");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   //entry=leg->AddEntry("new_histo_group_VgS_hww2l2v_13TeV_0j_mtw2_stack_8_stack_8","V#gamma* [772.4]","F");

   //ci = 2198;
   //color = new TColor(ci, 0.4, 1, 0.4, " ", 0.6);
   //entry->SetFillColor(ci);
   //entry->SetFillStyle(1001);

   //ci = TColor::GetColor("#66ff66");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   //entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0j_mtw2_stack_9_stack_1_stack_9_stack_1","Higgs [988.5]","F");

   //ci = TColor::GetColor("#ff0000");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(2);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   //entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0j_mtw2","Data [0.0]","EPL");
   //entry->SetLineColor(1);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(20);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   leg->Draw();
   
   TH1F *hframe_copy__1004 = new TH1F("hframe_copy__1004","",1000,0,200);
   hframe_copy__1004->SetMinimum(0);
   hframe_copy__1004->SetMaximum(13509.97);
   hframe_copy__1004->SetDirectory(0);
   hframe_copy__1004->SetStats(0);
   hframe_copy__1004->SetLineStyle(0);
   hframe_copy__1004->SetMarkerStyle(20);
   hframe_copy__1004->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   hframe_copy__1004->GetXaxis()->SetNdivisions(506);
   hframe_copy__1004->GetXaxis()->SetLabelFont(42);
   hframe_copy__1004->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1004->GetXaxis()->SetLabelSize(0.05);
   hframe_copy__1004->GetXaxis()->SetTitleSize(0.06);
   hframe_copy__1004->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1004->GetXaxis()->SetTitleFont(42);
   hframe_copy__1004->GetYaxis()->SetTitle("Events / 10 GeV");
   hframe_copy__1004->GetYaxis()->SetLabelFont(42);
   hframe_copy__1004->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1004->GetYaxis()->SetLabelSize(0.05);
   hframe_copy__1004->GetYaxis()->SetTitleSize(0.06);
   hframe_copy__1004->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__1004->GetYaxis()->SetTitleFont(42);
   hframe_copy__1004->GetZaxis()->SetLabelFont(42);
   hframe_copy__1004->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1004->GetZaxis()->SetLabelSize(0.05);
   hframe_copy__1004->GetZaxis()->SetTitleSize(0.06);
   hframe_copy__1004->GetZaxis()->SetTitleFont(42);
   hframe_copy__1004->Draw("sameaxis");
   cchww2l2v_13TeV_0j_mtw2->Modified();
   cchww2l2v_13TeV_0j_mtw2->cd();
   cchww2l2v_13TeV_0j_mtw2->SetSelected(cchww2l2v_13TeV_0j_mtw2);

   cchww2l2v_13TeV_0j_mtw2->SaveAs("plot.pdf");
}

void OOT_CLS_DPHI_DT()
{
//=========Macro generated from canvas: OOT_CLS_DPHI_DT/OOT_CLS_DPHI_DT
//=========  (Thu May  1 02:46:38 2025) by ROOT version 6.22/09
   TCanvas *OOT_CLS_DPHI_DT = new TCanvas("OOT_CLS_DPHI_DT", "OOT_CLS_DPHI_DT",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   OOT_CLS_DPHI_DT->SetHighLightColor(2);
   OOT_CLS_DPHI_DT->Range(-44.48398,0.6425,596.0854,3.3925);
   OOT_CLS_DPHI_DT->SetFillColor(0);
   OOT_CLS_DPHI_DT->SetBorderMode(0);
   OOT_CLS_DPHI_DT->SetBorderSize(2);
   OOT_CLS_DPHI_DT->SetTickx(1);
   OOT_CLS_DPHI_DT->SetTicky(1);
   OOT_CLS_DPHI_DT->SetLeftMargin(0.1475);
   OOT_CLS_DPHI_DT->SetRightMargin(0.15);
   OOT_CLS_DPHI_DT->SetTopMargin(0.07);
   OOT_CLS_DPHI_DT->SetBottomMargin(0.13);
   OOT_CLS_DPHI_DT->SetFrameFillStyle(0);
   OOT_CLS_DPHI_DT->SetFrameBorderMode(0);
   OOT_CLS_DPHI_DT->SetFrameFillStyle(0);
   OOT_CLS_DPHI_DT->SetFrameBorderMode(0);
   
   TH1F *hframe__5 = new TH1F("hframe__5","",1000,50,500);
   hframe__5->SetMinimum(1);
   hframe__5->SetMaximum(3.2);
   hframe__5->SetDirectory(0);
   hframe__5->SetStats(0);
   hframe__5->SetLineStyle(0);
   hframe__5->SetMarkerStyle(20);
   hframe__5->GetXaxis()->SetTitle("N_{hits}");
   hframe__5->GetXaxis()->SetLabelFont(42);
   hframe__5->GetXaxis()->SetLabelOffset(0.012);
   hframe__5->GetXaxis()->SetLabelSize(0.05);
   hframe__5->GetXaxis()->SetTitleSize(0.06);
   hframe__5->GetXaxis()->SetTitleOffset(0.9);
   hframe__5->GetXaxis()->SetTitleFont(42);
   hframe__5->GetYaxis()->SetTitle("#Delta#phi(cluster,    #mu_{ trigger } )");
   hframe__5->GetYaxis()->SetLabelFont(42);
   hframe__5->GetYaxis()->SetLabelOffset(0.012);
   hframe__5->GetYaxis()->SetLabelSize(0.05);
   hframe__5->GetYaxis()->SetTitleSize(0.06);
   hframe__5->GetYaxis()->SetTitleFont(42);
   hframe__5->GetZaxis()->SetLabelFont(42);
   hframe__5->GetZaxis()->SetLabelOffset(0.012);
   hframe__5->GetZaxis()->SetLabelSize(0.05);
   hframe__5->GetZaxis()->SetTitleSize(0.06);
   hframe__5->GetZaxis()->SetTitleOffset(1);
   hframe__5->GetZaxis()->SetTitleFont(42);
   hframe__5->Draw("AXIS");
   TLatex *   tex = new TLatex(0.8875,0.944,"#scale[1.0]{}");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.042);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1475,0.944,"");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.0525);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2318556,0.944,"");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0399);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__6 = new TH1F("hframe_copy__6","",1000,50,500);
   hframe_copy__6->SetMinimum(1);
   hframe_copy__6->SetMaximum(3.2);
   hframe_copy__6->SetDirectory(0);
   hframe_copy__6->SetStats(0);
   hframe_copy__6->SetLineStyle(0);
   hframe_copy__6->SetMarkerStyle(20);
   hframe_copy__6->GetXaxis()->SetTitle("N_{hits}");
   hframe_copy__6->GetXaxis()->SetLabelFont(42);
   hframe_copy__6->GetXaxis()->SetLabelOffset(0.012);
   hframe_copy__6->GetXaxis()->SetLabelSize(0.05);
   hframe_copy__6->GetXaxis()->SetTitleSize(0.06);
   hframe_copy__6->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__6->GetXaxis()->SetTitleFont(42);
   hframe_copy__6->GetYaxis()->SetTitle("#Delta#phi(cluster,    #mu_{ trigger } )");
   hframe_copy__6->GetYaxis()->SetLabelFont(42);
   hframe_copy__6->GetYaxis()->SetLabelOffset(0.012);
   hframe_copy__6->GetYaxis()->SetLabelSize(0.05);
   hframe_copy__6->GetYaxis()->SetTitleSize(0.06);
   hframe_copy__6->GetYaxis()->SetTitleFont(42);
   hframe_copy__6->GetZaxis()->SetLabelFont(42);
   hframe_copy__6->GetZaxis()->SetLabelOffset(0.012);
   hframe_copy__6->GetZaxis()->SetLabelSize(0.05);
   hframe_copy__6->GetZaxis()->SetTitleSize(0.06);
   hframe_copy__6->GetZaxis()->SetTitleOffset(1);
   hframe_copy__6->GetZaxis()->SetTitleFont(42);
   hframe_copy__6->Draw("sameaxis");
   
   TH1F *hframe_copy__7 = new TH1F("hframe_copy__7","",1000,50,500);
   hframe_copy__7->SetMinimum(1);
   hframe_copy__7->SetMaximum(3.2);
   hframe_copy__7->SetDirectory(0);
   hframe_copy__7->SetStats(0);
   hframe_copy__7->SetLineStyle(0);
   hframe_copy__7->SetMarkerStyle(20);
   hframe_copy__7->GetXaxis()->SetTitle("N_{hits}");
   hframe_copy__7->GetXaxis()->SetLabelFont(42);
   hframe_copy__7->GetXaxis()->SetLabelOffset(0.012);
   hframe_copy__7->GetXaxis()->SetLabelSize(0.05);
   hframe_copy__7->GetXaxis()->SetTitleSize(0.06);
   hframe_copy__7->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__7->GetXaxis()->SetTitleFont(42);
   hframe_copy__7->GetYaxis()->SetTitle("#Delta#phi(cluster,    #mu_{ trigger } )");
   hframe_copy__7->GetYaxis()->SetLabelFont(42);
   hframe_copy__7->GetYaxis()->SetLabelOffset(0.012);
   hframe_copy__7->GetYaxis()->SetLabelSize(0.05);
   hframe_copy__7->GetYaxis()->SetTitleSize(0.06);
   hframe_copy__7->GetYaxis()->SetTitleFont(42);
   hframe_copy__7->GetZaxis()->SetLabelFont(42);
   hframe_copy__7->GetZaxis()->SetLabelOffset(0.012);
   hframe_copy__7->GetZaxis()->SetLabelSize(0.05);
   hframe_copy__7->GetZaxis()->SetTitleSize(0.06);
   hframe_copy__7->GetZaxis()->SetTitleOffset(1);
   hframe_copy__7->GetZaxis()->SetTitleFont(42);
   hframe_copy__7->Draw("sameaxis");
   
   TH1F *hframe_copy__8 = new TH1F("hframe_copy__8","",1000,50,500);
   hframe_copy__8->SetMinimum(1);
   hframe_copy__8->SetMaximum(3.2);
   hframe_copy__8->SetDirectory(0);
   hframe_copy__8->SetStats(0);
   hframe_copy__8->SetLineStyle(0);
   hframe_copy__8->SetMarkerStyle(20);
   hframe_copy__8->GetXaxis()->SetTitle("N_{hits}");
   hframe_copy__8->GetXaxis()->SetLabelFont(42);
   hframe_copy__8->GetXaxis()->SetLabelOffset(0.012);
   hframe_copy__8->GetXaxis()->SetLabelSize(0.05);
   hframe_copy__8->GetXaxis()->SetTitleSize(0.06);
   hframe_copy__8->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__8->GetXaxis()->SetTitleFont(42);
   hframe_copy__8->GetYaxis()->SetTitle("#Delta#phi(cluster,    #mu_{ trigger } )");
   hframe_copy__8->GetYaxis()->SetLabelFont(42);
   hframe_copy__8->GetYaxis()->SetLabelOffset(0.012);
   hframe_copy__8->GetYaxis()->SetLabelSize(0.05);
   hframe_copy__8->GetYaxis()->SetTitleSize(0.06);
   hframe_copy__8->GetYaxis()->SetTitleFont(42);
   hframe_copy__8->GetZaxis()->SetLabelFont(42);
   hframe_copy__8->GetZaxis()->SetLabelOffset(0.012);
   hframe_copy__8->GetZaxis()->SetLabelSize(0.05);
   hframe_copy__8->GetZaxis()->SetTitleSize(0.06);
   hframe_copy__8->GetZaxis()->SetTitleOffset(1);
   hframe_copy__8->GetZaxis()->SetTitleFont(42);
   hframe_copy__8->Draw("sameaxis");
      tex = new TLatex(0.15,0.94,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.58,0.94,"41.6 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH2F *h1_swap = new TH2F("h1_swap","h1_swap",45,50,500,40,0,4);
   h1_swap->SetMaximum(0);
   h1_swap->SetEntries(1800);
   h1_swap->SetContour(20);
   h1_swap->SetContourLevel(0,0);
   h1_swap->SetContourLevel(1,0);
   h1_swap->SetContourLevel(2,0);
   h1_swap->SetContourLevel(3,0);
   h1_swap->SetContourLevel(4,0);
   h1_swap->SetContourLevel(5,0);
   h1_swap->SetContourLevel(6,0);
   h1_swap->SetContourLevel(7,0);
   h1_swap->SetContourLevel(8,0);
   h1_swap->SetContourLevel(9,0);
   h1_swap->SetContourLevel(10,0);
   h1_swap->SetContourLevel(11,0);
   h1_swap->SetContourLevel(12,0);
   h1_swap->SetContourLevel(13,0);
   h1_swap->SetContourLevel(14,0);
   h1_swap->SetContourLevel(15,0);
   h1_swap->SetContourLevel(16,0);
   h1_swap->SetContourLevel(17,0);
   h1_swap->SetContourLevel(18,0);
   h1_swap->SetContourLevel(19,0);
   
   TPaletteAxis *palette = new TPaletteAxis(503.2028,1,532.0285,3.2,h1_swap);
   palette->SetLabelColor(1);
   palette->SetLabelFont(42);
   palette->SetLabelOffset(0.012);
   palette->SetLabelSize(0.05);
   palette->SetTitleOffset(1);
   palette->SetTitleSize(0.04);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#1e836b");
   palette->SetFillColor(ci);
   palette->SetFillStyle(1001);
   h1_swap->GetListOfFunctions()->Add(palette,"br");
   h1_swap->SetLineStyle(0);
   h1_swap->SetMarkerStyle(20);
   h1_swap->GetXaxis()->SetLabelFont(42);
   h1_swap->GetXaxis()->SetLabelOffset(0.012);
   h1_swap->GetXaxis()->SetLabelSize(0.05);
   h1_swap->GetXaxis()->SetTitleSize(0.06);
   h1_swap->GetXaxis()->SetTitleOffset(0.9);
   h1_swap->GetXaxis()->SetTitleFont(42);
   h1_swap->GetYaxis()->SetRange(11,32);
   h1_swap->GetYaxis()->SetLabelFont(42);
   h1_swap->GetYaxis()->SetLabelOffset(0.012);
   h1_swap->GetYaxis()->SetLabelSize(0.05);
   h1_swap->GetYaxis()->SetTitleSize(0.06);
   h1_swap->GetYaxis()->SetTitleOffset(1.25);
   h1_swap->GetYaxis()->SetTitleFont(42);
   h1_swap->GetZaxis()->SetTitle("Events");
   h1_swap->GetZaxis()->SetNdivisions(5);
   h1_swap->GetZaxis()->SetLabelFont(42);
   h1_swap->GetZaxis()->SetLabelOffset(0.012);
   h1_swap->GetZaxis()->SetLabelSize(0.05);
   h1_swap->GetZaxis()->SetTitleSize(0.04);
   h1_swap->GetZaxis()->SetTitleOffset(1);
   h1_swap->GetZaxis()->SetTitleFont(42);
   h1_swap->Draw("same colz");
   
   TPaveText *pt = new TPaveText(380,2.5,410,3,"br");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextSize(0.15);
   TText *pt_LaTex = pt->AddText("A");
   pt_LaTex->SetTextColor(98);
   pt->Draw();
   
   pt = new TPaveText(380,1.5,410,2,"br");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextSize(0.15);
   pt_LaTex = pt->AddText("B");
   pt_LaTex->SetTextColor(98);
   pt->Draw();
   
   pt = new TPaveText(165,2.5,195,3,"br");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextSize(0.15);
   pt_LaTex = pt->AddText("C");
   pt_LaTex->SetTextColor(98);
   pt->Draw();
   
   pt = new TPaveText(165,1.5,195,2,"br");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextSize(0.15);
   pt_LaTex = pt->AddText("D");
   pt_LaTex->SetTextColor(98);
   pt->Draw();
   TLine *line = new TLine(310,1,310,3.2);
   line->SetLineColor(98);
   line->SetLineWidth(4);
   line->Draw();
   line = new TLine(50,2.2,500,2.2);
   line->SetLineColor(98);
   line->SetLineWidth(4);
   line->Draw();
   OOT_CLS_DPHI_DT->Modified();
   OOT_CLS_DPHI_DT->cd();
   OOT_CLS_DPHI_DT->SetSelected(OOT_CLS_DPHI_DT);
}

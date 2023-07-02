#include "AtlasStyle.C"
#include "AtlasLabels.C"
#include "AtlasUtils.C"



void matrix_fit() {

  SetAtlasStyle();

  std::string playground;

  while (1) {
    cout << "Choose Playground area:" << endl << "> ";
    cin >> playground;
    if(playground == "expo") {
    Double_t N_SR_jg, N_SR_jg_2, N_SR_jg_3, N_SR_jg_4;
    TCanvas *c1=new TCanvas("", "");
    // c1->SetCanvasSize(900,700);
    // float x1[8]={0.075, 0.095, 0.115, 0.135, 0.155, 0.175, 0.195, 0.215};
    // float ex[8]={0,0,0,0,0,0,0,0};
    //
    // float y1[8]={574, 367, 234, 128, 103, 59, 40, 42};
    // float ey1[8]={20, 19, 15, 12, 12, 8, 7, 7};

  //   Double_t slice_1=0.065, slice_2=0.09, slice_3=0.115, slice_4=0.14, slice_5=0.165;
  //   float x1[4]={0.0775, 0.1025, 0.1275, 0.1525};
  //   float ex[4]={0,0,0,0};
  //
  //   float y1[4]={700, 370, 210, 134};
  //   float ey1[4]={40, 30, 20, 15};

    // float x1[15]={0.070, 0.080, 0.090, 0.100, 0.110, 0.120, 0.130, 0.140, 0.150, 0.160, 0.170, 0.180, 0.190, 0.200, 0.210};
    // float ex[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    //
    // float y1[15]={320, 260, 210, 153, 121, 112, 74, 56, 49, 30, 30, 14, 16, 12, 23};
    // float ey1[15]={30, 20, 20, 18, 17, 15, 12, 10, 9, 7, 7, 5, 5, 5, 6};
    //Double_t slice_1=0.065, slice_2=0.08, slice_3=0.095, slice_4=0.11, slice_5=0.125, slice_6=0.14, slice_7=0.155, slice_8=0.17, slice_9=0.185, slice_10=0.2;

    float x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
    float ex[10]={0,0,0,0,0,0,0,0,0,0};

    float y1[10]={460, 320, 200, 175, 93, 93, 59, 35, 17, 20};
    float ey1[10]={30, 30, 20, 19, 13, 13, 11, 8, 6, 7};

    // float x1[4]={0.029, 0.039, 0.049, 0.059};
    // float ex[4]={0,0,0,0};


    //
    // float x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
    // float ex[10]={0,0,0,0,0,0,0,0,0,0};
    //
    // float y1[10]={460, 230, 210, 180, 93, 95, 60, 37, 24, 27};
    // float ey1[10]={30, 30, 20, 20, 13, 13, 11, 8, 7, 7};




    // float x1[4]={0.029, 0.039, 0.049, 0.059};
    // float ex[4]={0,0,0,0};
    //
    // float y1[4]={430, 430, 420, 370};
    // float ey1[4]={90, 40, 40, 30};

    TF1 *fit = new TF1("", "expo", 0, 0.22);
    fit->SetLineColor(9);
    TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
    graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
    graph1->GetXaxis()->SetLimits(0,0.22);
    graph1->GetYaxis()->SetRangeUser(15,2500);
    graph1->SetMarkerStyle(20);
    graph1->SetMarkerColor(1);
    graph1->Fit(fit);
    graph1->Draw("AP");

    Double_t chi2=fit->GetChisquare();
    std::cout << "chi2=" << chi2 << '\n';
    Double_t ndof=fit->GetNDF();
    std::cout << "ndof=" << ndof << '\n';

    N_SR_jg=fit->Eval(0.004);

    Double_t er_1=N_SR_jg*sqrt(pow(fit->GetParError(0),2)+pow(0.004*(fit->GetParError(1)),2));

    std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_1 << '\n';
    TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
    leg->SetBorderSize(0);
    //leg->SetTextFont(42);
    leg->AddEntry(graph1, "jet->gamma in i slice");
    leg->AddEntry(fit,"Expo fit", "l");
  //  leg->AddEntry((TObject*)0, "#chi^{2}/N_{d.o.f.}=7.17/8", "");
    //leg->AddEntry((TObject*)0, "#chi^{2}/N_{d.o.f.}=9.52/6", "");
    leg->AddEntry((TObject*)0, "#chi^{2}/N_{d.o.f.}=9.37/13", "");
    leg->Draw();
    TLine *l = new TLine(0.014,0,0.014,2500);
    l->SetY1(0);
    l->SetLineColor(6);
    l->SetLineWidth(3);
    l->SetLineStyle(9);
    l->Draw("SAME");

    TLatex* latex=new TLatex();
    latex->DrawLatex(0,0,"#bf{#it{ATLAS}} Internal");
    latex->DrawLatex(0,0,"#sqrt{s}=13 TeV, 140 fb^{-1}");

  }
  else if (playground == "pol3"){

    Double_t N_SR_jg, N_SR_jg_2, N_SR_jg_3, N_SR_jg_4;
    TCanvas *c1=new TCanvas("", "");
    //c1->SetCanvasSize(900,700);
    // float x1[4]={0.029, 0.039, 0.049, 0.059};
    // float ex[4]={0,0,0,0};
    //
    // float y1[4]={430, 430, 420, 370};
    // float ey1[4]={90, 40, 40, 30};

    float x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
    float ex[10]={0,0,0,0,0,0,0,0,0,0};

    float y1[10]={460, 320, 200, 175, 93, 93, 59, 35, 17, 20};
    float ey1[10]={30, 30, 20, 19, 13, 13, 11, 8, 6, 7};

    TF1 *fit = new TF1("", "pol3", 0, 0.210);

    fit->SetLineColor(9);
    TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
    graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
    graph1->GetXaxis()->SetLimits(0, 0.210);
    graph1->GetYaxis()->SetRangeUser(10,2500);
    graph1->SetMarkerStyle(20);
    graph1->SetMarkerColor(1);
    graph1->Fit(fit);
    graph1->Draw("AP");

    Double_t chi2=fit->GetChisquare();
    std::cout << "chi2=" << chi2 << '\n';
    Double_t ndof=fit->GetNDF();
    std::cout << "ndof=" << ndof << '\n';

    N_SR_jg=fit->Eval(0.014);

    Double_t er_1=sqrt(pow(fit->GetParError(0),2)+pow(0.014*(fit->GetParError(1)),2)+pow(pow(0.014,2)*(fit->GetParError(2)),2)+pow(pow(0.014,3)*(fit->GetParError(3)),2));

    std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_1 << '\n';
    TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
    leg->SetBorderSize(0);
    leg->AddEntry(graph1, "jet->gamma in i slice");
    leg->AddEntry(fit,"Pol3 fit", "l");
  //  leg->AddEntry((TObject*)0, "#chi^{2}/N_{d.o.f.}=7.95/6", ""); // 4
    leg->AddEntry((TObject*)0, "#chi^{2}/N_{d.o.f.}=7.95/6", ""); //10
    leg->Draw();
    TLine *l = new TLine(0.014,0,0.014,2500);
    l->SetY1(0);
    l->SetLineColor(6);
    l->SetLineWidth(3);
    l->SetLineStyle(9);
    l->Draw("SAME");
    TLatex* latex=new TLatex();
    latex->DrawLatex(0,0,"#bf{#it{ATLAS}} Internal");
    latex->DrawLatex(0,0,"#sqrt{s}=13 TeV, 140 fb^{-1}");
    }
    else if (playground == "pol2"){

      Double_t N_SR_jg, N_SR_jg_2, N_SR_jg_3, N_SR_jg_4;
      TCanvas *c1=new TCanvas("", "");

      // float x1[4]={0.029, 0.039, 0.049, 0.059};
      // float ex[4]={0,0,0,0};
      //
      // float y1[4]={510, 400, 280, 150};
      // float ey1[4]={60, 80, 30, 40};

      float x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
      float ex[10]={0,0,0,0,0,0,0,0,0,0};

      float y1[10]={460, 320, 200, 175, 93, 93, 59, 35, 17, 20};
      float ey1[10]={30, 30, 20, 19, 13, 13, 11, 8, 6, 7};

      TF1 *fit = new TF1("", "pol2", 0, 0.210);

      fit->SetLineColor(9);
      TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
      graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
      graph1->GetXaxis()->SetLimits(0, 0.210);
      graph1->GetYaxis()->SetRangeUser(10,2500);
      graph1->SetMarkerStyle(20);
      graph1->SetMarkerColor(1);
      graph1->Fit(fit);
      graph1->Draw("AP");

      Double_t chi2=fit->GetChisquare();
      std::cout << "chi2=" << chi2 << '\n';
      Double_t ndof=fit->GetNDF();
      std::cout << "ndof=" << ndof << '\n';

      N_SR_jg=fit->Eval(0.014);

      Double_t er_1=sqrt(pow(fit->GetParError(0),2)+pow(0.014*(fit->GetParError(1)),2)+pow(pow(0.014,2)*(fit->GetParError(2)),2));

      std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_1 << '\n';
      TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
      leg->SetBorderSize(0);
      leg->AddEntry(graph1, "jet->gamma in i slice");
      leg->AddEntry(fit,"Pol2 fit", "l");
      leg->AddEntry((TObject*)0, "#chi^{2}/N_{d.o.f.}=13.50/7", "");
      leg->Draw();
      TLine *l = new TLine(0.014,0,0.014,2500);
      l->SetY1(0);
      l->SetLineColor(6);
      l->SetLineWidth(3);
      l->SetLineStyle(9);
      l->Draw("SAME");
      TLatex* latex=new TLatex();
      latex->DrawLatex(0,0,"#bf{#it{ATLAS}} Internal");
      latex->DrawLatex(0,0,"#sqrt{s}=13 TeV, 140 fb^{-1}");
      }

      else if (playground == "pol1"){

        Double_t N_SR_jg, N_SR_jg_2, N_SR_jg_3, N_SR_jg_4;
        TCanvas *c1=new TCanvas("", "");

        // float x1[4]={0.029, 0.039, 0.049, 0.059};
        // float ex[4]={0,0,0,0};
        //
        // float y1[4]={430, 430, 420, 370};
        // float ey1[4]={90, 40, 40, 30};

        float x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
        float ex[10]={0,0,0,0,0,0,0,0,0,0};

        float y1[10]={460, 320, 200, 175, 93, 93, 59, 35, 17, 20};
        float ey1[10]={30, 30, 20, 19, 13, 13, 11, 8, 6, 7};

        TF1 *fit = new TF1("", "pol1", 0, 0.210);

        fit->SetLineColor(9);
        TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
        graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
        graph1->GetXaxis()->SetLimits(0, 0.210);
        graph1->GetYaxis()->SetRangeUser(10,2500);
        graph1->SetMarkerStyle(20);
        graph1->SetMarkerColor(1);
        graph1->Fit(fit);
        graph1->Draw("AP");

        Double_t chi2=fit->GetChisquare();
        std::cout << "chi2=" << chi2 << '\n';
        Double_t ndof=fit->GetNDF();
        std::cout << "ndof=" << ndof << '\n';

        N_SR_jg=fit->Eval(0.014);

        Double_t er_1=sqrt(pow(fit->GetParError(0),2)+pow(0.014*(fit->GetParError(1)),2));

        std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_1 << '\n';
        TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
        leg->SetBorderSize(0);
        leg->AddEntry(graph1, "jet->gamma in i slice");
        leg->AddEntry(fit,"Pol1 fit", "l");
        leg->AddEntry((TObject*)0, "#chi^{2}/N_{d.o.f.}=101.44/8", "");
        leg->Draw();
        TLine *l = new TLine(0.014,0,0.014,2500);
        l->SetY1(0);
        l->SetLineColor(6);
        l->SetLineWidth(3);
        l->SetLineStyle(9);
        l->Draw("SAME");
        TLatex* latex=new TLatex();
        latex->DrawLatex(0,0,"#bf{#it{ATLAS}} Internal");
        latex->DrawLatex(0,0,"#sqrt{s}=13 TeV, 140 fb^{-1}");
        }
        else if (playground == "landau"){

          Double_t N_SR_jg, N_SR_jg_2, N_SR_jg_3, N_SR_jg_4;
          TCanvas *c1=new TCanvas("", "");
          // Double_t pi=Pi();
          float x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
          float ex[10]={0,0,0,0,0,0,0,0,0,0};

          float y1[10]={460, 320, 200, 175, 93, 93, 59, 35, 17, 20};
          float ey1[10]={30, 30, 20, 19, 13, 13, 11, 8, 6, 7};

          TF1 *fit = new TF1("fit", "landau", 0, 0.2075);
          fit->SetLineColor(9);
          TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
          graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
          graph1->GetXaxis()->SetLimits(0,0.2075);
          graph1->GetYaxis()->SetRangeUser(10,2500);
          graph1->SetMarkerStyle(20);
          graph1->SetMarkerColor(1);
          graph1->Fit(fit);
          graph1->Draw("AP");

          Double_t chi2=fit->GetChisquare();
          std::cout << "chi2=" << chi2 << '\n';
          Double_t ndof=fit->GetNDF();
          std::cout << "ndof=" << ndof << '\n';

          N_SR_jg=fit->Eval(0.014);

          Double_t er_1=sqrt(pow(fit->GetParError(0),2)+pow(0.014*(fit->GetParError(1)),2));

          std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_1 << '\n';
          TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
          leg->SetBorderSize(0);
          leg->AddEntry(graph1, "jet->gamma in i slice");
          leg->AddEntry(fit,"Landau", "l");
          leg->AddEntry((TObject*)0, "#chi^{2}/N_{d.o.f.}=13.23/7", "");
          leg->Draw();
          TLine *l = new TLine(0.014,0,0.014,2500);
          l->SetY1(0);
          l->SetLineColor(6);
          l->SetLineWidth(3);
          l->SetLineStyle(9);
          l->Draw("SAME");
          TLatex* latex=new TLatex();
          latex->DrawLatex(0,0,"#bf{#it{ATLAS}} Internal");
          latex->DrawLatex(0,0,"#sqrt{s}=13 TeV, 140 fb^{-1}");
          }

    else if (playground == ".q" || playground == "exit" || playground == "break" )
          break;
  }
}

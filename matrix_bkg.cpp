void matrix_bkg(){

  Int_t mc_ph_type;
  UInt_t n_ph, n_jet, n_e_looseBL, n_mu, ph_isem,n_ph_eg,n_jet_eg,n_e_looseBL_eg,n_mu_eg;
  Double_t weight, ph_pt, ph_phi, ph_eta, ph_iso_et20, ph_iso_pt, ph_z_point;
  Double_t jet_lead_phi,jet_lead_pt, jet_lead_eta, metTST_pt, metTST_phi, metTSTsignif, koef;
  Double_t jet_lead_pt_eg,ph_pt_eg, ph_phi_eg, ph_eta_eg, jet_lead_phi_eg, et_lead_pt_eg,jet_lead_eta_eg, metTST_pt_eg, metTST_phi_eg,metTSTsignif_eg,weight_eg;
  //Double_t error_CR1_eg_1, error_CR1_eg_2, error_CR1_eg_3, error_CR1_eg_4, error_CR1_eg_5, error_CR2_eg_1,error_CR2_eg_2,error_CR2_eg_3,error_CR2_eg_4,error_CR2_eg_5,error_FR_eg_1;
  Double_t error_CR1_bac_1, error_CR1_bac_2, error_CR1_bac_3, error_CR1_bac_4, error_CR1_bac_5, error_CR1_bac_6, error_CR1_bac_7, error_CR1_bac_8, error_CR1_bac_9, error_CR1_bac_10, error_CR1_bac_11, error_CR1_bac_12, error_CR1_bac_13, error_CR1_bac_14, error_CR1_bac_15, error_CR2_bac_1, error_CR2_bac_2, error_CR2_bac_3, error_CR2_bac_4, error_CR2_bac_5, error_CR2_bac_6, error_CR2_bac_7, error_CR2_bac_8, error_CR2_bac_9, error_CR2_bac_10, error_CR2_bac_11, error_CR2_bac_12, error_CR2_bac_13, error_CR2_bac_14, error_CR2_bac_15;
  Double_t N_CR1_bac_1, N_CR1_bac_2, N_CR1_bac_3, N_CR1_bac_4, N_CR1_bac_5, N_CR1_bac_6, N_CR1_bac_7, N_CR1_bac_8, N_CR1_bac_9, N_CR1_bac_10, N_CR1_bac_11, N_CR1_bac_12, N_CR1_bac_13, N_CR1_bac_14, N_CR1_bac_15, N_CR2_bac_1, N_CR2_bac_2, N_CR2_bac_3, N_CR2_bac_4, N_CR2_bac_5, N_CR2_bac_6, N_CR2_bac_7, N_CR2_bac_8, N_CR2_bac_9, N_CR2_bac_10, N_CR2_bac_11, N_CR2_bac_12, N_CR2_bac_13, N_CR2_bac_14, N_CR2_bac_15;
  //Double_t N_FR_egamma_1, N_CR1_egamma_1, N_CR1_egamma_2, N_CR1_egamma_3, N_CR1_egamma_4, N_CR1_egamma_5, N_CR2_egamma_1, N_CR2_egamma_2, N_CR2_egamma_3, N_CR2_egamma_4, N_CR2_egamma_5;
  Double_t L_a = 36214.96, L_d = 44307.4, L_e = 58450.1, L_j;
  Int_t nbins=1;
  // Double_t xbins[4] = {120, 170, 270, 1200};
  //  Double_t slice_1=0.065, slice_2=0.085, slice_3=0.105, slice_4=0.125, slice_5=0.145, slice_6=0.165, slice_7=0.185, slice_8=0.205, slice_cut=0.225;
  //  Double_t slice_1=0.065, slice_2=0.09, slice_3=0.115, slice_4=0.14, slice_5=0.165;
  //Double_t slice_1=0.065, slice_2=0.075, slice_3=0.085, slice_4=0.095, slice_5=0.105, slice_6=0.115, slice_7=0.125, slice_8=0.135, slice_9=0.145, slice_10=0.155, slice_11=0.165, slice_12=0.175, slice_13=0.185, slice_14=0.195, slice_15=0.205, slice_cut=0.215;
  Double_t slice_1=0.065, slice_2=0.08, slice_3=0.095, slice_4=0.11, slice_5=0.125, slice_6=0.14, slice_7=0.155, slice_8=0.17, slice_9=0.185, slice_10=0.2, slice_11=0.215;
  //  Double_t slice_1=0.024, slice_2=0.034, slice_3=0.044, slice_4=0.054, slice_5=0.065, slice_6=0.08;
  // const char *path_eg = "/home/valerian/programs/R_factor_MC/private/data_e_to_gamma/data_etogamma.root";
  // TFile *e_gamma = new TFile(path_eg, "READ");
  // TTree *tree_eg = (TTree*)e_gamma->Get("etogam");
  //
  // TH1D *hist_FR_egamma_1 = new TH1D ("", "hist1", nbins, 0, 1200);
  // TH1D *hist_FR_egamma_2 = new TH1D ("", "hist2", nbins, 0, 1200);
  // TH1D *hist_FR_egamma_3 = new TH1D ("", "hist3", nbins, 0, 1200);
  // TH1D *hist_FR_egamma_4 = new TH1D ("", "hist4", nbins, 0, 1200);
  // TH1D *hist_FR_egamma_5 = new TH1D ("", "hist5", nbins, 0, 1200);
  //
  // TH1D *hist_CR1_egamma_1 = new TH1D ("", "hist1", nbins, 0, 1200);
  // TH1D *hist_CR1_egamma_2 = new TH1D ("", "hist2", nbins, 0, 1200);
  // TH1D *hist_CR1_egamma_3 = new TH1D ("", "hist3", nbins, 0, 1200);
  // TH1D *hist_CR1_egamma_4 = new TH1D ("", "hist4", nbins, 0, 1200);
  // TH1D *hist_CR1_egamma_5 = new TH1D ("", "hist5", nbins, 0, 1200);
  //
  // TH1D *hist_CR2_egamma_1 = new TH1D ("", "hist1", nbins, 0, 1200);
  // TH1D *hist_CR2_egamma_2 = new TH1D ("", "hist2", nbins, 0, 1200);
  // TH1D *hist_CR2_egamma_3 = new TH1D ("", "hist3", nbins, 0, 1200);
  // TH1D *hist_CR2_egamma_4 = new TH1D ("", "hist4", nbins, 0, 1200);
  // TH1D *hist_CR2_egamma_5 = new TH1D ("", "hist5", nbins, 0, 1200);

  // hist_FR_egamma_1 = dynamic_cast<TH1D*>(hist_FR_egamma_1->Rebin(nbins,"hist1",xbins));
  // hist_FR_egamma_2 = dynamic_cast<TH1D*>(hist_FR_egamma_2->Rebin(nbins,"hist2",xbins));
  // hist_FR_egamma_3 = dynamic_cast<TH1D*>(hist_FR_egamma_3->Rebin(nbins,"hist3",xbins));
  // hist_FR_egamma_4 = dynamic_cast<TH1D*>(hist_FR_egamma_4->Rebin(nbins,"hist4",xbins));
  // hist_FR_egamma_5 = dynamic_cast<TH1D*>(hist_FR_egamma_5->Rebin(nbins,"hist5",xbins));
  //
  // hist_CR1_egamma_2 = dynamic_cast<TH1D*>(hist_CR1_egamma_2->Rebin(nbins,"hist1",xbins));
  // hist_CR1_egamma_1 = dynamic_cast<TH1D*>(hist_CR1_egamma_1->Rebin(nbins,"hist2",xbins));
  // hist_CR1_egamma_3 = dynamic_cast<TH1D*>(hist_CR1_egamma_3->Rebin(nbins,"hist3",xbins));
  // hist_CR1_egamma_4 = dynamic_cast<TH1D*>(hist_CR1_egamma_4->Rebin(nbins,"hist4",xbins));
  // hist_CR1_egamma_5 = dynamic_cast<TH1D*>(hist_CR1_egamma_5->Rebin(nbins,"hist5",xbins));
  //
  // hist_CR2_egamma_1 = dynamic_cast<TH1D*>(hist_CR2_egamma_1->Rebin(nbins,"hist1",xbins));
  // hist_CR2_egamma_2 = dynamic_cast<TH1D*>(hist_CR2_egamma_2->Rebin(nbins,"hist2",xbins));
  // hist_CR2_egamma_3 = dynamic_cast<TH1D*>(hist_CR2_egamma_3->Rebin(nbins,"hist3",xbins));
  // hist_CR2_egamma_4 = dynamic_cast<TH1D*>(hist_CR2_egamma_4->Rebin(nbins,"hist4",xbins));
  // hist_CR2_egamma_5 = dynamic_cast<TH1D*>(hist_CR2_egamma_5->Rebin(nbins,"hist5",xbins));

  // tree_eg->SetBranchAddress("n_ph", &n_ph_eg);
  // tree_eg->SetBranchAddress("n_jet", &n_jet_eg);
  // tree_eg->SetBranchAddress("n_e_looseBL", &n_e_looseBL_eg);
  // tree_eg->SetBranchAddress("n_mu", &n_mu_eg);
  // tree_eg->SetBranchAddress("ph_pt",&ph_pt_eg);
  // tree_eg->SetBranchAddress("ph_phi",&ph_phi_eg);
  // tree_eg->SetBranchAddress("ph_eta",&ph_eta_eg);
  // tree_eg->SetBranchAddress("jet_lead_phi",&jet_lead_phi_eg);
  // tree_eg->SetBranchAddress("jet_lead_pt",&jet_lead_pt_eg);
  // tree_eg->SetBranchAddress("jet_lead_eta",&jet_lead_eta_eg);
  // tree_eg->SetBranchAddress("metTST_pt", &metTST_pt_eg);
  // tree_eg->SetBranchAddress("metTST_phi",&metTST_phi_eg);
  // tree_eg->SetBranchAddress("metTSTsignif", &metTSTsignif_eg);
  // tree_eg->SetBranchAddress("weight", &weight_eg);
  //
  // int num_eg = (int)tree_eg->GetEntries();
  //
  //   for (int q=0; q<num_eg; q++){
  //   tree_eg->GetEntry(q);
  //
  //   TLorentzVector *veg1 = new TLorentzVector();
  //   TLorentzVector *veg2 = new TLorentzVector();
  //   TLorentzVector *veg3 = new TLorentzVector();
  //   veg1->SetPtEtaPhiM(metTST_pt_eg, 0, metTST_phi_eg, 0);
  //   veg2->SetPtEtaPhiM(jet_lead_pt_eg, jet_lead_eta_eg, jet_lead_phi_eg, 0);
  //   veg3->SetPtEtaPhiM(ph_pt_eg, ph_eta_eg, ph_phi_eg, 0);
  //   Double_t dphi_1_eg=abs((*veg1).DeltaPhi(*veg3));
  //   Double_t dphi_2_eg=abs((*veg1).DeltaPhi(*veg2));
  //
  //   if (ph_pt_eg <= 150) continue;
  //   if (n_ph_eg !=1 || n_e_looseBL_eg !=0 || n_mu_eg!=0) continue;
  //
  //   bool str_kinem_select_eg = (metTSTsignif_eg <= 11 || metTST_pt_eg <= 130 || dphi_1_eg <= 0.7 || (n_jet_eg >=1 && dphi_2_eg <= 0.4));
  //
  //   hist_CR1_egamma_1->Fill(metTST_pt_eg, weight_eg);
  //   hist_CR1_egamma_2->Fill(metTST_pt_eg, weight_eg);
  //   hist_CR1_egamma_3->Fill(metTST_pt_eg, weight_eg);
  //   hist_CR1_egamma_4->Fill(metTST_pt_eg, weight_eg);
  //   hist_CR1_egamma_5->Fill(metTST_pt_eg, weight_eg);
  //
  //   if (str_kinem_select_eg==0) hist_CR2_egamma_1->Fill(metTST_pt_eg, weight_eg);
  //   if (str_kinem_select_eg==0) hist_CR2_egamma_2->Fill(metTST_pt_eg, weight_eg);
  //   if (str_kinem_select_eg==0) hist_CR2_egamma_3->Fill(metTST_pt_eg, weight_eg);
  //   if (str_kinem_select_eg==0) hist_CR2_egamma_4->Fill(metTST_pt_eg, weight_eg);
  //   if (str_kinem_select_eg==0) hist_CR2_egamma_5->Fill(metTST_pt_eg, weight_eg);
  //
  //   hist_FR_egamma_1->Fill(metTST_pt_eg, weight_eg);
  //   hist_FR_egamma_2->Fill(metTST_pt_eg, weight_eg);
  //   hist_FR_egamma_3->Fill(metTST_pt_eg, weight_eg);
  //   hist_FR_egamma_4->Fill(metTST_pt_eg, weight_eg);
  //   hist_FR_egamma_5->Fill(metTST_pt_eg, weight_eg);
  // }
  //
  // hist_CR1_egamma_1->Scale(20.8714/hist_CR1_egamma_1->Integral());
  // hist_CR1_egamma_2->Scale(3.93908/hist_CR1_egamma_2->Integral());
  // hist_CR1_egamma_3->Scale(23.4937/hist_CR1_egamma_3->Integral());
  // hist_CR1_egamma_4->Scale(0/hist_CR1_egamma_4->Integral());
  // hist_CR1_egamma_5->Scale(27.3061/hist_CR1_egamma_5->Integral());
  //
  // hist_CR2_egamma_1->Scale(4.50514/hist_CR2_egamma_1->Integral());
  // hist_CR2_egamma_2->Scale(0.736718/hist_CR2_egamma_2->Integral());
  // hist_CR2_egamma_3->Scale(4.39124/hist_CR2_egamma_3->Integral());
  // hist_CR2_egamma_4->Scale(0/hist_CR2_egamma_4->Integral());
  // hist_CR2_egamma_5->Scale(6.09972/hist_CR2_egamma_5->Integral());
  //
  // hist_FR_egamma_1->Scale(12925/hist_FR_egamma_1->Integral());
  // hist_FR_egamma_2->Scale(12925/hist_FR_egamma_2->Integral());
  // hist_FR_egamma_3->Scale(12925/hist_FR_egamma_3->Integral());
  // hist_FR_egamma_4->Scale(12925/hist_FR_egamma_4->Integral());
  // hist_FR_egamma_5->Scale(12925/hist_FR_egamma_5->Integral());
  //
  // N_CR1_egamma_1=hist_CR1_egamma_1->IntegralAndError(1, nbins, error_CR1_eg_1, "");
  // N_CR1_egamma_2=hist_CR1_egamma_2->IntegralAndError(1, nbins, error_CR1_eg_2, "");
  // N_CR1_egamma_3=hist_CR1_egamma_3->IntegralAndError(1, nbins, error_CR1_eg_3, "");
  // N_CR1_egamma_4=hist_CR1_egamma_4->IntegralAndError(1, nbins, error_CR1_eg_4, "");
  // N_CR1_egamma_5=hist_CR1_egamma_5->IntegralAndError(1, nbins, error_CR1_eg_5, "");
  //
  // N_CR2_egamma_1=hist_CR2_egamma_1->IntegralAndError(1, nbins, error_CR2_eg_1, "");
  // N_CR2_egamma_2=hist_CR2_egamma_2->IntegralAndError(1, nbins, error_CR2_eg_2, "");
  // N_CR2_egamma_3=hist_CR2_egamma_3->IntegralAndError(1, nbins, error_CR2_eg_3, "");
  // N_CR2_egamma_4=hist_CR2_egamma_4->IntegralAndError(1, nbins, error_CR2_eg_4, "");
  // N_CR2_egamma_5=hist_CR2_egamma_5->IntegralAndError(1, nbins, error_CR2_eg_5, "");
  //
  // N_FR_egamma_1=hist_FR_egamma_1->IntegralAndError(1, nbins, error_FR_eg_1, "");
  //
  // std::cout <<"        N_FR_egamma=" << N_FR_egamma_1 << " +- " << error_FR_eg_1 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 1 " << " N_CR1_egamma_1=" << N_CR1_egamma_1 << " +- " << error_CR1_eg_1 << "    N_CR2_egamma_1=" << N_CR2_egamma_1 << " +- " << error_CR2_eg_1 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 2 " << " N_CR1_egamma_2=" << N_CR1_egamma_2 << " +- " << error_CR1_eg_2 << "    N_CR2_egamma_2=" << N_CR2_egamma_2 << " +- " << error_CR2_eg_2 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 3 " << " N_CR1_egamma_3=" << N_CR1_egamma_3 << " +- " << error_CR1_eg_3 << "    N_CR2_egamma_3=" << N_CR2_egamma_3<< " +- " << error_CR2_eg_3 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 4 " << " N_CR1_egamma_4=" << N_CR1_egamma_4 << " +- " << error_CR1_eg_4 << "    N_CR2_egamma_4=" << N_CR2_egamma_4 << " +- " << error_CR2_eg_4 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 5 " <<" N_CR1_egamma_5=" << N_CR1_egamma_5 << " +- " << error_CR1_eg_5 << "    N_CR2_egamma_5=" << N_CR2_egamma_5 << " +- " << error_CR2_eg_5 << '\n';
  // std::cout << "" << '\n';
  //
  //
  // Double_t overflow_FR_eg_1 = hist_FR_egamma_1->GetBinContent(nbins)+hist_FR_egamma_1->GetBinContent(nbins+1);
  // Double_t overflow_FR_eg_2 = hist_FR_egamma_2->GetBinContent(nbins)+hist_FR_egamma_2->GetBinContent(nbins+1);
  // Double_t overflow_FR_eg_3 = hist_FR_egamma_3->GetBinContent(nbins)+hist_FR_egamma_3->GetBinContent(nbins+1);
  // Double_t overflow_FR_eg_4 = hist_FR_egamma_4->GetBinContent(nbins)+hist_FR_egamma_4->GetBinContent(nbins+1);
  // Double_t overflow_FR_eg_5 = hist_FR_egamma_5->GetBinContent(nbins)+hist_FR_egamma_5->GetBinContent(nbins+1);
  //
  // Double_t overflow_CR1_eg_1 = hist_CR1_egamma_1->GetBinContent(nbins)+hist_CR1_egamma_1->GetBinContent(nbins+1);
  // Double_t overflow_CR1_eg_2 = hist_CR1_egamma_2->GetBinContent(nbins)+hist_CR1_egamma_2->GetBinContent(nbins+1);
  // Double_t overflow_CR1_eg_3 = hist_CR1_egamma_3->GetBinContent(nbins)+hist_CR1_egamma_3->GetBinContent(nbins+1);
  // Double_t overflow_CR1_eg_4 = hist_CR1_egamma_4->GetBinContent(nbins)+hist_CR1_egamma_4->GetBinContent(nbins+1);
  // Double_t overflow_CR1_eg_5 = hist_CR1_egamma_5->GetBinContent(nbins)+hist_CR1_egamma_5->GetBinContent(nbins+1);
  //
  // Double_t overflow_CR2_eg_1 = hist_CR2_egamma_1->GetBinContent(nbins)+hist_CR2_egamma_1->GetBinContent(nbins+1);
  // Double_t overflow_CR2_eg_2 = hist_CR2_egamma_2->GetBinContent(nbins)+hist_CR2_egamma_2->GetBinContent(nbins+1);
  // Double_t overflow_CR2_eg_3 = hist_CR2_egamma_3->GetBinContent(nbins)+hist_CR2_egamma_3->GetBinContent(nbins+1);
  // Double_t overflow_CR2_eg_4 = hist_CR2_egamma_4->GetBinContent(nbins)+hist_CR2_egamma_4->GetBinContent(nbins+1);
  // Double_t overflow_CR2_eg_5 = hist_CR2_egamma_5->GetBinContent(nbins)+hist_CR2_egamma_5->GetBinContent(nbins+1);
  //
  // hist_FR_egamma_1->SetBinContent(nbins, overflow_FR_eg_1);
  // hist_FR_egamma_2->SetBinContent(nbins, overflow_FR_eg_2);
  // hist_FR_egamma_3->SetBinContent(nbins, overflow_FR_eg_3);
  // hist_FR_egamma_4->SetBinContent(nbins, overflow_FR_eg_4);
  // hist_FR_egamma_5->SetBinContent(nbins, overflow_FR_eg_5);
  //
  // hist_CR1_egamma_1->SetBinContent(nbins, overflow_CR1_eg_1);
  // hist_CR1_egamma_2->SetBinContent(nbins, overflow_CR1_eg_2);
  // hist_CR1_egamma_3->SetBinContent(nbins, overflow_CR1_eg_3);
  // hist_CR1_egamma_4->SetBinContent(nbins, overflow_CR1_eg_4);
  // hist_CR1_egamma_5->SetBinContent(nbins, overflow_CR1_eg_5);
  //
  // hist_CR2_egamma_1->SetBinContent(nbins, overflow_CR2_eg_1);
  // hist_CR2_egamma_2->SetBinContent(nbins, overflow_CR2_eg_2);
  // hist_CR2_egamma_3->SetBinContent(nbins, overflow_CR2_eg_3);
  // hist_CR2_egamma_4->SetBinContent(nbins, overflow_CR2_eg_4);
  // hist_CR2_egamma_5->SetBinContent(nbins, overflow_CR2_eg_5);
  //
  // Double_t overflow_err_FR_eg_1 = sqrt(pow(hist_FR_egamma_1->GetBinError(nbins), 2) + pow(hist_FR_egamma_1->GetBinError(nbins+1), 2));
  // Double_t overflow_err_FR_eg_2 = sqrt(pow(hist_FR_egamma_2->GetBinError(nbins), 2) + pow(hist_FR_egamma_2->GetBinError(nbins+1), 2));
  // Double_t overflow_err_FR_eg_3 = sqrt(pow(hist_FR_egamma_3->GetBinError(nbins), 2) + pow(hist_FR_egamma_3->GetBinError(nbins+1), 2));
  // Double_t overflow_err_FR_eg_4 = sqrt(pow(hist_FR_egamma_4->GetBinError(nbins), 2) + pow(hist_FR_egamma_4->GetBinError(nbins+1), 2));
  // Double_t overflow_err_FR_eg_5 = sqrt(pow(hist_FR_egamma_5->GetBinError(nbins), 2) + pow(hist_FR_egamma_5->GetBinError(nbins+1), 2));
  //
  // Double_t overflow_err_CR1_eg_1 = sqrt(pow(hist_CR1_egamma_1->GetBinError(nbins), 2) + pow(hist_CR1_egamma_1->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR1_eg_2 = sqrt(pow(hist_CR1_egamma_2->GetBinError(nbins), 2) + pow(hist_CR1_egamma_2->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR1_eg_3 = sqrt(pow(hist_CR1_egamma_3->GetBinError(nbins), 2) + pow(hist_CR1_egamma_3->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR1_eg_4 = sqrt(pow(hist_CR1_egamma_4->GetBinError(nbins), 2) + pow(hist_CR1_egamma_4->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR1_eg_5 = sqrt(pow(hist_CR1_egamma_5->GetBinError(nbins), 2) + pow(hist_CR1_egamma_5->GetBinError(nbins+1), 2));
  //
  // Double_t overflow_err_CR2_eg_1 = sqrt(pow(hist_CR2_egamma_1->GetBinError(nbins), 2) + pow(hist_CR2_egamma_1->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR2_eg_2 = sqrt(pow(hist_CR2_egamma_2->GetBinError(nbins), 2) + pow(hist_CR2_egamma_2->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR2_eg_3 = sqrt(pow(hist_CR2_egamma_3->GetBinError(nbins), 2) + pow(hist_CR2_egamma_3->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR2_eg_4 = sqrt(pow(hist_CR2_egamma_4->GetBinError(nbins), 2) + pow(hist_CR2_egamma_4->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR2_eg_5 = sqrt(pow(hist_CR2_egamma_5->GetBinError(nbins), 2) + pow(hist_CR2_egamma_5->GetBinError(nbins+1), 2));
  //
  // hist_FR_egamma_1->SetBinError(nbins, overflow_err_FR_eg_1);
  // hist_FR_egamma_2->SetBinError(nbins, overflow_err_FR_eg_2);
  // hist_FR_egamma_3->SetBinError(nbins, overflow_err_FR_eg_3);
  // hist_FR_egamma_4->SetBinError(nbins, overflow_err_FR_eg_4);
  // hist_FR_egamma_5->SetBinError(nbins, overflow_err_FR_eg_5);
  //
  // hist_CR1_egamma_1->SetBinError(nbins, overflow_err_CR1_eg_1);
  // hist_CR1_egamma_2->SetBinError(nbins, overflow_err_CR1_eg_2);
  // hist_CR1_egamma_3->SetBinError(nbins, overflow_err_CR1_eg_3);
  // hist_CR1_egamma_4->SetBinError(nbins, overflow_err_CR1_eg_4);
  // hist_CR1_egamma_5->SetBinError(nbins, overflow_err_CR1_eg_5);
  //
  // hist_CR2_egamma_1->SetBinError(nbins, overflow_err_CR2_eg_1);
  // hist_CR2_egamma_2->SetBinError(nbins, overflow_err_CR2_eg_2);
  // hist_CR2_egamma_3->SetBinError(nbins, overflow_err_CR2_eg_3);
  // hist_CR2_egamma_4->SetBinError(nbins, overflow_err_CR2_eg_4);
  // hist_CR2_egamma_5->SetBinError(nbins, overflow_err_CR2_eg_5);

  TH1D *hist_CR1_bkg_1 = new TH1D ("hist_CR1_bkg_1", "hist_CR1_bkg_1", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_2 = new TH1D ("hist_CR1_bkg_2", "hist_CR1_bkg_2", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_3 = new TH1D ("hist_CR1_bkg_3", "hist_CR1_bkg_3", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_4 = new TH1D ("hist_CR1_bkg_4", "hist_CR1_bkg_4", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_5 = new TH1D ("hist_CR1_bkg_5", "hist_CR1_bkg_5", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_6 = new TH1D ("hist_CR1_bkg_6", "hist_CR1_bkg_6", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_7 = new TH1D ("hist_CR1_bkg_7", "hist_CR1_bkg_7", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_8 = new TH1D ("hist_CR1_bkg_8", "hist_CR1_bkg_8", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_9 = new TH1D ("hist_CR1_bkg_9", "hist_CR1_bkg_9", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_10 = new TH1D ("hist_CR1_bkg_10", "hist_CR1_bkg_10", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_11 = new TH1D ("hist_CR1_bkg_11", "hist_CR1_bkg_11", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_12 = new TH1D ("hist_CR1_bkg_12", "hist_CR1_bkg_12", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_13 = new TH1D ("hist_CR1_bkg_13", "hist_CR1_bkg_13", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_14 = new TH1D ("hist_CR1_bkg_14", "hist_CR1_bkg_14", nbins, 0.5, 1.5);
  TH1D *hist_CR1_bkg_15 = new TH1D ("hist_CR1_bkg_15", "hist_CR1_bkg_15", nbins, 0.5, 1.5);

  TH1D *hist_CR2_bkg_1 = new TH1D ("hist_CR2_bkg_1", "hist_CR2_bkg_1", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_2 = new TH1D ("hist_CR2_bkg_2", "hist_CR2_bkg_2", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_3 = new TH1D ("hist_CR2_bkg_3", "hist_CR2_bkg_3", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_4 = new TH1D ("hist_CR2_bkg_4", "hist_CR2_bkg_4", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_5 = new TH1D ("hist_CR2_bkg_5", "hist_CR2_bkg_5", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_6 = new TH1D ("hist_CR2_bkg_6", "hist_CR2_bkg_6", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_7 = new TH1D ("hist_CR2_bkg_7", "hist_CR2_bkg_7", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_8 = new TH1D ("hist_CR2_bkg_8", "hist_CR2_bkg_8", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_9 = new TH1D ("hist_CR2_bkg_9", "hist_CR2_bkg_9", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_10 = new TH1D ("hist_CR2_bkg_10", "hist_CR2_bkg_10", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_11 = new TH1D ("hist_CR2_bkg_11", "hist_CR2_bkg_11", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_12 = new TH1D ("hist_CR2_bkg_12", "hist_CR2_bkg_12", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_13 = new TH1D ("hist_CR2_bkg_13", "hist_CR2_bkg_13", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_14 = new TH1D ("hist_CR2_bkg_14", "hist_CR2_bkg_14", nbins, 0.5, 1.5);
  TH1D *hist_CR2_bkg_15 = new TH1D ("hist_CR2_bkg_15", "hist_CR2_bkg_15", nbins, 0.5, 1.5);



  // hist_FR_bac_1 = dynamic_cast<TH1D*>(hist_FR_bac_1->Rebin(nbins,"hist1",xbins));
  // hist_FR_bac_2 = dynamic_cast<TH1D*>(hist_FR_bac_2->Rebin(nbins,"hist2",xbins));
  // hist_FR_bac_3 = dynamic_cast<TH1D*>(hist_FR_bac_3->Rebin(nbins,"hist3",xbins));
  // hist_FR_bac_4 = dynamic_cast<TH1D*>(hist_FR_bac_4->Rebin(nbins,"hist4",xbins));
  // hist_FR_bac_5 = dynamic_cast<TH1D*>(hist_FR_bac_5->Rebin(nbins,"hist5",xbins));
  //
  // hist_CR1_bac_1 = dynamic_cast<TH1D*>(hist_CR1_bac_1->Rebin(nbins,"hist1",xbins));
  // hist_CR1_bac_2 = dynamic_cast<TH1D*>(hist_CR1_bac_2->Rebin(nbins,"hist2",xbins));
  // hist_CR1_bac_3 = dynamic_cast<TH1D*>(hist_CR1_bac_3->Rebin(nbins,"hist3",xbins));
  // hist_CR1_bac_4 = dynamic_cast<TH1D*>(hist_CR1_bac_4->Rebin(nbins,"hist4",xbins));
  // hist_CR1_bac_5 = dynamic_cast<TH1D*>(hist_CR1_bac_5->Rebin(nbins,"hist5",xbins));
  //
  // hist_CR2_bac_1 = dynamic_cast<TH1D*>(hist_CR2_bac_1->Rebin(nbins,"hist1",xbins));
  // hist_CR2_bac_2 = dynamic_cast<TH1D*>(hist_CR2_bac_2->Rebin(nbins,"hist2",xbins));
  // hist_CR2_bac_3 = dynamic_cast<TH1D*>(hist_CR2_bac_3->Rebin(nbins,"hist3",xbins));
  // hist_CR2_bac_4 = dynamic_cast<TH1D*>(hist_CR2_bac_4->Rebin(nbins,"hist4",xbins));
  // hist_CR2_bac_5 = dynamic_cast<TH1D*>(hist_CR2_bac_5->Rebin(nbins,"hist5",xbins));

    const char *path = "/home/valerian/programs/R_factor_MC/private/";
    const char *nabor[] = {"gamma_jet_361045","gamma_jet_361046","gamma_jet_361047","gamma_jet_361048","gamma_jet_361049","gamma_jet_361050","gamma_jet_361051","gamma_jet_361052","gamma_jet_361053","gamma_jet_361054","gamma_jet_361055","gamma_jet_361056",
    "ttgamma_410389",
    "Wgamma_QCD_364525","Wgamma_QCD_364530", "Wgamma_QCD_364535",
    "Wgamma_EWK_361273","Wgamma_EWK_361274","Wgamma_EWK_361275",
    "Zll_gamma_364504","Zll_gamma_364509","Zll_gamma_364514",
    "egamma_308096","egamma_364170","egamma_364171","egamma_364172","egamma_364173","egamma_364174","egamma_364175","egamma_364176","egamma_364177","egamma_364178","egamma_364179","egamma_364180","egamma_364181","egamma_364182","egamma_364183",
    "egamma_410645","egamma_410644","egamma_410470","egamma_700344","egamma_700345","egamma_700346"}; //410644 l=38

    for (int l = 0; l <= 42; l++) {
    char *Nabor = new char[strlen(path) + strlen(nabor[l]) + 1];
    strcpy(Nabor, path);
    strcat(Nabor, nabor[l]);

    const char *year[] = {"/user.akurova.a.MxAOD.root","/user.akurova.d.MxAOD.root","/user.akurova.e.MxAOD.root"};
   //  int n = sizeof(year)/sizeof(year[0]);
      for (int j = 0; j <= 2; j++) {
      char *bac= new char[strlen(Nabor) + strlen(year[j]) + 1];
      strcpy(bac,Nabor);
      strcat(bac,year[j]);

      TFile *bac_MC = new TFile(bac, "READ");
      TTree *tree = (TTree*)bac_MC->Get("output_tree");
      TTree *tree_koef= (TTree*)bac_MC->Get("norm_tree");
      TTree *tree_sum_w = (TTree*)bac_MC->Get("output_tree_sw");

      Double_t sumw = 0;
      Double_t sum_of_weights_bk_xAOD;

      tree_sum_w->SetBranchAddress("sum_of_weights_bk_xAOD",&sum_of_weights_bk_xAOD);

      int entry = (int)tree_sum_w->GetEntries();
      for (int k=0; k<entry; k++)
      {
        tree_sum_w->GetEntry(k);
        sumw += sum_of_weights_bk_xAOD;
      }

      tree->SetBranchAddress("n_ph", &n_ph);
      tree->SetBranchAddress("n_jet", &n_jet);
      tree->SetBranchAddress("n_e_looseBL", &n_e_looseBL);
      tree->SetBranchAddress("n_mu", &n_mu);
      tree->SetBranchAddress("weight", &weight);
      tree->SetBranchAddress("ph_pt",&ph_pt);
      tree->SetBranchAddress("ph_phi",&ph_phi);
      tree->SetBranchAddress("ph_eta",&ph_eta);
      tree->SetBranchAddress("ph_iso_et20",&ph_iso_et20);
      tree->SetBranchAddress("ph_iso_pt", &ph_iso_pt);
      tree->SetBranchAddress("ph_isem", &ph_isem);
      tree->SetBranchAddress("ph_z_point", &ph_z_point);
      tree->SetBranchAddress("jet_lead_phi",&jet_lead_phi);
      tree->SetBranchAddress("jet_lead_pt",&jet_lead_pt);
      tree->SetBranchAddress("jet_lead_eta",&jet_lead_eta);
      tree->SetBranchAddress("metTST_pt", &metTST_pt);
      tree->SetBranchAddress("metTST_phi",&metTST_phi);
      tree->SetBranchAddress("metTSTsignif", &metTSTsignif);
      tree->SetBranchAddress("mc_ph_type", &mc_ph_type);

      tree_koef->SetBranchAddress("koef", &koef);
      int Num_koef = (int)tree_koef->GetEntries();
       for (int g=0; g<Num_koef; g++){
          tree_koef->GetEntry(g);
       }

    int Num_tree = (int)tree->GetEntries();

    for (int i=0; i<Num_tree; i++){
      tree->GetEntry(i);

      TLorentzVector *v1 = new TLorentzVector();
      TLorentzVector *v2 = new TLorentzVector();
      TLorentzVector *v3 = new TLorentzVector();
      v1->SetPtEtaPhiM(metTST_pt, 0, metTST_phi, 0);
      v2->SetPtEtaPhiM(jet_lead_pt, jet_lead_eta, jet_lead_phi, 0);
      v3->SetPtEtaPhiM(ph_pt, ph_eta, ph_phi, 0);
      Double_t dphi_1=abs((*v1).DeltaPhi(*v3));
      Double_t dphi_2=abs((*v1).DeltaPhi(*v2));

      if (ph_pt <= 150) continue;                                //Ограничение на поперечный импульс фотона, обусловленное особенностями триггерной системы
      if (n_ph !=1 || n_e_looseBL !=0 || n_mu!=0) continue;      //Условие на число фотонов; лептонное вето, отсеивающее процессы с лептонами в конечном состоянии
      if (fabs(ph_z_point) >= 250) continue;                     //Условие на координатную переменную, соответствующую наиболее эффективному отбору для подавления первичных фотонов, которые обусловленн конфигурацией пучка
      if (l < 39  && fabs(weight) >= 100) continue;
      if (metTST_pt <=130) continue;                             //Потеренная поперечная энергия(модуль вектора потеренного поперечного импульса)
      if (metTSTsignif <= 11) continue;                          //Значимость, отделяющая события с правдивой величиной от события с ложной величиной потерянной поперечной энергии
      // if (mc_ph_type >= 13 && mc_ph_type <= 15) continue;
      if (dphi_1 <= 0.7) continue;                               //Разность азимутальных углов
      if (n_jet >= 1 && dphi_2 <= 0.4) continue;

    //  Double_t Iso_gap = 2;
    //  UInt_t Loose2=0x27fc01, Loose3=0x25fc01, Loose4=0x5fc01, Loose5=0x1fc01;

      Double_t Iso_cal = ph_iso_et20/ph_pt;                       //Калориметрическая изоляция, сооответствующая изоляции FixedCutLoose
      Double_t Iso_track = ph_iso_pt/ph_pt;                       //Трековая изоляция

      (j == 0) ? L_j=L_a : (j == 1) ? L_j=L_d : L_j=L_e;
      Double_t norm_koef=koef*L_j/sumw;
      // bool str_kinem_select = (metTSTsignif <= 11 || metTST_pt <= 130 || dphi_1 <= 0.7 || (n_jet>=1 && dphi_2 <= 0.4));
      bool gamma_jet_num = (l==0 || l==1 || l==2 || l==3 || l==4 || l==5 || l==6 || l==7 || l==8 || l==9 || l==10 || l==11);

      // if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_1->Fill(n_ph, weight*norm_koef*0.66); //неизолированная область с жестким фотоном
      // if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_2->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_3->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_4->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_5->Fill(n_ph, weight*norm_koef*0.66);
      //
      // if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_1->Fill(n_ph, weight*norm_koef*0.66);   //неизолированная область с мягким фотоном
      // if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_2->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_3->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_4->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_5->Fill(n_ph, weight*norm_koef*0.66);
      //
      // if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_1->Fill(n_ph, weight*norm_koef); //неизолированная область с жестким фотоном
      // if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_2->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_3->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_4->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_5->Fill(n_ph, weight*norm_koef);
      //
      // if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_1->Fill(n_ph, weight*norm_koef);   //неизолированная область с мягким фотоном
      // if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_2->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_3->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_4->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_5->Fill(n_ph, weight*norm_koef);

      if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_1->Fill(n_ph, weight*norm_koef*0.66); //неизолированная область с жестким фотоном
      if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_2->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_3->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_4->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_5->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_6 && Iso_cal < slice_7 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_6->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_7 && Iso_cal < slice_8 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_7->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_8 && Iso_cal < slice_9 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_8->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_9 && Iso_cal < slice_10 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_9->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_10 && Iso_cal < slice_11 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_10->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_11 && Iso_cal < slice_12 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_11->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_12 && Iso_cal < slice_13 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_12->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_13 && Iso_cal < slice_14 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_13->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_14 && Iso_cal < slice_15 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_14->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_15 && Iso_cal < slice_cut && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==1) hist_CR1_bkg_15->Fill(n_ph, weight*norm_koef*0.66);

      if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_1->Fill(n_ph, weight*norm_koef*0.66);   //неизолированная область с мягким фотоном
      if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_2->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_3->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_4->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_5->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_6 && Iso_cal < slice_7 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_6->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_7 && Iso_cal < slice_8 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_7->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_8 && Iso_cal < slice_9 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_8->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_9 && Iso_cal < slice_10 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_9->Fill(n_ph, weight*norm_koef*0.66);
      if (Iso_cal > slice_10 && Iso_cal < slice_11 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_10->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_11 && Iso_cal < slice_12 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_11->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_12 && Iso_cal < slice_13 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_12->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_13 && Iso_cal < slice_14 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_13->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_14 && Iso_cal < slice_15 && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_14->Fill(n_ph, weight*norm_koef*0.66);
      // if (Iso_cal > slice_15 && Iso_cal < slice_cut && Iso_track > 0.05 && gamma_jet_num==1) hist_CR2_bkg_15->Fill(n_ph, weight*norm_koef*0.66);

      if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_1->Fill(n_ph, weight*norm_koef); //неизолированная область с жестким фотоном
      if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_2->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_3->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_4->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_5->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_6 && Iso_cal < slice_7 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_6->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_7 && Iso_cal < slice_8 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_7->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_8 && Iso_cal < slice_9 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_8->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_9 && Iso_cal < slice_10 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_9->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_10 && Iso_cal < slice_11 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_10->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_11 && Iso_cal < slice_12 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_11->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_12 && Iso_cal < slice_13 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_12->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_13 && Iso_cal < slice_14 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_13->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_14 && Iso_cal < slice_15 && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_14->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_15 && Iso_cal < slice_cut && Iso_track > 0.05 && ph_isem == 0 && gamma_jet_num==0) hist_CR1_bkg_15->Fill(n_ph, weight*norm_koef);

      if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_1->Fill(n_ph, weight*norm_koef);   //неизолированная область с мягким фотоном
      if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_2->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_3->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_4->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_5->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_6 && Iso_cal < slice_7 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_6->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_7 && Iso_cal < slice_8 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_7->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_8 && Iso_cal < slice_9 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_8->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_9 && Iso_cal < slice_10 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_9->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_10 && Iso_cal < slice_11 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_10->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_11 && Iso_cal < slice_12 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_11->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_12 && Iso_cal < slice_13 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_12->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_13 && Iso_cal < slice_14 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_13->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_14 && Iso_cal < slice_15 && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_14->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_15 && Iso_cal < slice_cut && Iso_track > 0.05 && gamma_jet_num==0) hist_CR2_bkg_15->Fill(n_ph, weight*norm_koef);
        }
      }
    }
    // hist_FR_bac_1->Add(hist_FR_egamma_1);
    // hist_FR_bac_2->Add(hist_FR_egamma_2);;
    // hist_FR_bac_3->Add(hist_FR_egamma_3);
    // hist_FR_bac_4->Add(hist_FR_egamma_4);
    // hist_FR_bac_5->Add(hist_FR_egamma_5);
    //
    // hist_CR1_bac_1->Add(hist_CR1_egamma_1);
    // hist_CR1_bac_2->Add(hist_CR1_egamma_2);
    // hist_CR1_bac_3->Add(hist_CR1_egamma_3);
    // hist_CR1_bac_4->Add(hist_CR1_egamma_4);
    // hist_CR1_bac_5->Add(hist_CR1_egamma_5);
    //
    // hist_CR2_bac_1->Add(hist_CR2_egamma_1);
    // hist_CR2_bac_2->Add(hist_CR2_egamma_2);
    // hist_CR2_bac_3->Add(hist_CR2_egamma_3);
    // hist_CR2_bac_4->Add(hist_CR2_egamma_4);
    // hist_CR2_bac_5->Add(hist_CR2_egamma_5);
    //
    // Double_t overflow_FR_1 = hist_FR_bac_1->GetBinContent(nbins)+hist_FR_bac_1->GetBinContent(nbins+1);
    // Double_t overflow_FR_2 = hist_FR_bac_2->GetBinContent(nbins)+hist_FR_bac_2->GetBinContent(nbins+1);
    // Double_t overflow_FR_3 = hist_FR_bac_3->GetBinContent(nbins)+hist_FR_bac_3->GetBinContent(nbins+1);
    // Double_t overflow_FR_4 = hist_FR_bac_4->GetBinContent(nbins)+hist_FR_bac_4->GetBinContent(nbins+1);
    // Double_t overflow_FR_5 = hist_FR_bac_5->GetBinContent(nbins)+hist_FR_bac_5->GetBinContent(nbins+1);
    //
    // Double_t overflow_CR1_1 = hist_CR1_bac_1->GetBinContent(nbins)+hist_CR1_bac_1->GetBinContent(nbins+1);
    // Double_t overflow_CR1_2 = hist_CR1_bac_2->GetBinContent(nbins)+hist_CR1_bac_2->GetBinContent(nbins+1);
    // Double_t overflow_CR1_3 = hist_CR1_bac_3->GetBinContent(nbins)+hist_CR1_bac_3->GetBinContent(nbins+1);
    // Double_t overflow_CR1_4 = hist_CR1_bac_4->GetBinContent(nbins)+hist_CR1_bac_4->GetBinContent(nbins+1);
    // Double_t overflow_CR1_5 = hist_CR1_bac_5->GetBinContent(nbins)+hist_CR1_bac_5->GetBinContent(nbins+1);
    //
    // Double_t overflow_CR2_1 = hist_CR2_bac_1->GetBinContent(nbins)+hist_CR2_bac_1->GetBinContent(nbins+1);
    // Double_t overflow_CR2_2 = hist_CR2_bac_2->GetBinContent(nbins)+hist_CR2_bac_2->GetBinContent(nbins+1);
    // Double_t overflow_CR2_3 = hist_CR2_bac_3->GetBinContent(nbins)+hist_CR2_bac_3->GetBinContent(nbins+1);
    // Double_t overflow_CR2_4 = hist_CR2_bac_4->GetBinContent(nbins)+hist_CR2_bac_4->GetBinContent(nbins+1);
    // Double_t overflow_CR2_5 = hist_CR2_bac_5->GetBinContent(nbins)+hist_CR2_bac_5->GetBinContent(nbins+1);
    //
    // hist_FR_bac_1->SetBinContent(nbins, overflow_FR_1);
    // hist_FR_bac_2->SetBinContent(nbins, overflow_FR_2);
    // hist_FR_bac_3->SetBinContent(nbins, overflow_FR_3);
    // hist_FR_bac_4->SetBinContent(nbins, overflow_FR_4);
    // hist_FR_bac_5->SetBinContent(nbins, overflow_FR_5);
    //
    // hist_CR1_bac_1->SetBinContent(nbins, overflow_CR1_1);
    // hist_CR1_bac_2->SetBinContent(nbins, overflow_CR1_2);
    // hist_CR1_bac_3->SetBinContent(nbins, overflow_CR1_3);
    // hist_CR1_bac_4->SetBinContent(nbins, overflow_CR1_4);
    // hist_CR1_bac_5->SetBinContent(nbins, overflow_CR1_5);
    //
    // hist_CR2_bac_1->SetBinContent(nbins, overflow_CR2_1);
    // hist_CR2_bac_2->SetBinContent(nbins, overflow_CR2_2);
    // hist_CR2_bac_3->SetBinContent(nbins, overflow_CR2_3);
    // hist_CR2_bac_4->SetBinContent(nbins, overflow_CR2_4);
    // hist_CR2_bac_5->SetBinContent(nbins, overflow_CR2_5);
    //
    // Double_t overflow_err_FR_1 = sqrt(pow(hist_FR_bac_1->GetBinError(nbins), 2) + pow(hist_FR_bac_1->GetBinError(nbins+1), 2));
    // Double_t overflow_err_FR_2 = sqrt(pow(hist_FR_bac_2->GetBinError(nbins), 2) + pow(hist_FR_bac_2->GetBinError(nbins+1), 2));
    // Double_t overflow_err_FR_3 = sqrt(pow(hist_FR_bac_3->GetBinError(nbins), 2) + pow(hist_FR_bac_3->GetBinError(nbins+1), 2));
    // Double_t overflow_err_FR_4 = sqrt(pow(hist_FR_bac_4->GetBinError(nbins), 2) + pow(hist_FR_bac_4->GetBinError(nbins+1), 2));
    // Double_t overflow_err_FR_5 = sqrt(pow(hist_FR_bac_5->GetBinError(nbins), 2) + pow(hist_FR_bac_5->GetBinError(nbins+1), 2));
    //
    // Double_t overflow_err_CR1_1 = sqrt(pow(hist_CR1_bac_1->GetBinError(nbins), 2) + pow(hist_CR1_bac_1->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR1_2 = sqrt(pow(hist_CR1_bac_2->GetBinError(nbins), 2) + pow(hist_CR1_bac_2->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR1_3 = sqrt(pow(hist_CR1_bac_3->GetBinError(nbins), 2) + pow(hist_CR1_bac_3->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR1_4 = sqrt(pow(hist_CR1_bac_4->GetBinError(nbins), 2) + pow(hist_CR1_bac_4->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR1_5 = sqrt(pow(hist_CR1_bac_5->GetBinError(nbins), 2) + pow(hist_CR1_bac_5->GetBinError(nbins+1), 2));
    //
    // Double_t overflow_err_CR2_1 = sqrt(pow(hist_CR2_bac_1->GetBinError(nbins), 2) + pow(hist_CR2_bac_1->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR2_2 = sqrt(pow(hist_CR2_bac_2->GetBinError(nbins), 2) + pow(hist_CR2_bac_2->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR2_3 = sqrt(pow(hist_CR2_bac_3->GetBinError(nbins), 2) + pow(hist_CR2_bac_3->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR2_4 = sqrt(pow(hist_CR2_bac_4->GetBinError(nbins), 2) + pow(hist_CR2_bac_4->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR2_5 = sqrt(pow(hist_CR2_bac_5->GetBinError(nbins), 2) + pow(hist_CR2_bac_5->GetBinError(nbins+1), 2));
    //
    // hist_FR_bac_1->SetBinError(nbins, overflow_err_FR_1);
    // hist_FR_bac_2->SetBinError(nbins, overflow_err_FR_2);
    // hist_FR_bac_3->SetBinError(nbins, overflow_err_FR_3);
    // hist_FR_bac_4->SetBinError(nbins, overflow_err_FR_4);
    // hist_FR_bac_5->SetBinError(nbins, overflow_err_FR_5);
    //
    // hist_CR1_bac_1->SetBinError(nbins, overflow_err_CR1_1);
    // hist_CR1_bac_2->SetBinError(nbins, overflow_err_CR1_2);
    // hist_CR1_bac_3->SetBinError(nbins, overflow_err_CR1_3);
    // hist_CR1_bac_4->SetBinError(nbins, overflow_err_CR1_4);
    // hist_CR1_bac_5->SetBinError(nbins, overflow_err_CR1_5);
    //
    // hist_CR2_bac_1->SetBinError(nbins, overflow_err_CR2_1);
    // hist_CR2_bac_2->SetBinError(nbins, overflow_err_CR2_2);
    // hist_CR2_bac_3->SetBinError(nbins, overflow_err_CR2_3);
    // hist_CR2_bac_4->SetBinError(nbins, overflow_err_CR2_4);
    // hist_CR2_bac_5->SetBinError(nbins, overflow_err_CR2_5);


    TFile *file_CR1 = new TFile ("CR1_bkg_MM.root","RECREATE");
    hist_CR1_bkg_1->Write();
    hist_CR1_bkg_2->Write();
    hist_CR1_bkg_3->Write();
    hist_CR1_bkg_4->Write();
    hist_CR1_bkg_5->Write();
    hist_CR1_bkg_6->Write();
    hist_CR1_bkg_7->Write();
    hist_CR1_bkg_8->Write();
    hist_CR1_bkg_9->Write();
    hist_CR1_bkg_10->Write();
    // hist_CR1_bkg_11->Write();
    // hist_CR1_bkg_12->Write();
    // hist_CR1_bkg_13->Write();
    // hist_CR1_bkg_14->Write();
    // hist_CR1_bkg_15->Write();
    file_CR1->Close();

    TFile *file_CR2 = new TFile ("CR2_bkg_MM.root","RECREATE");
    hist_CR2_bkg_1->Write();
    hist_CR2_bkg_2->Write();
    hist_CR2_bkg_3->Write();
    hist_CR2_bkg_4->Write();
    hist_CR2_bkg_5->Write();
    hist_CR2_bkg_6->Write();
    hist_CR2_bkg_7->Write();
    hist_CR2_bkg_8->Write();
    hist_CR2_bkg_9->Write();
    hist_CR2_bkg_10->Write();
    // hist_CR2_bkg_11->Write();
    // hist_CR2_bkg_12->Write();
    // hist_CR2_bkg_13->Write();
    // hist_CR2_bkg_14->Write();
    // hist_CR2_bkg_15->Write();
    file_CR2->Close();

    N_CR1_bac_1=hist_CR1_bkg_1->IntegralAndError(1, nbins, error_CR1_bac_1, "");
    N_CR1_bac_2=hist_CR1_bkg_2->IntegralAndError(1, nbins, error_CR1_bac_2, "");
    N_CR1_bac_3=hist_CR1_bkg_3->IntegralAndError(1, nbins, error_CR1_bac_3, "");
    N_CR1_bac_4=hist_CR1_bkg_4->IntegralAndError(1, nbins, error_CR1_bac_4, "");
    N_CR1_bac_5=hist_CR1_bkg_5->IntegralAndError(1, nbins, error_CR1_bac_5, "");
    N_CR1_bac_6=hist_CR1_bkg_6->IntegralAndError(1, nbins, error_CR1_bac_6, "");
    N_CR1_bac_7=hist_CR1_bkg_7->IntegralAndError(1, nbins, error_CR1_bac_7, "");
    N_CR1_bac_8=hist_CR1_bkg_8->IntegralAndError(1, nbins, error_CR1_bac_8, "");
    N_CR1_bac_9=hist_CR1_bkg_9->IntegralAndError(1, nbins, error_CR1_bac_9, "");
    N_CR1_bac_10=hist_CR1_bkg_10->IntegralAndError(1, nbins, error_CR1_bac_10, "");
    // N_CR1_bac_11=hist_CR1_bkg_11->IntegralAndError(1, nbins, error_CR1_bac_11, "");
    // N_CR1_bac_12=hist_CR1_bkg_12->IntegralAndError(1, nbins, error_CR1_bac_12, "");
    // N_CR1_bac_13=hist_CR1_bkg_13->IntegralAndError(1, nbins, error_CR1_bac_13, "");
    // N_CR1_bac_14=hist_CR1_bkg_14->IntegralAndError(1, nbins, error_CR1_bac_14, "");
    // N_CR1_bac_15=hist_CR1_bkg_15->IntegralAndError(1, nbins, error_CR1_bac_15, "");


    N_CR2_bac_1=hist_CR2_bkg_1->IntegralAndError(1, nbins, error_CR2_bac_1, "");
    N_CR2_bac_2=hist_CR2_bkg_2->IntegralAndError(1, nbins, error_CR2_bac_2, "");
    N_CR2_bac_3=hist_CR2_bkg_3->IntegralAndError(1, nbins, error_CR2_bac_3, "");
    N_CR2_bac_4=hist_CR2_bkg_4->IntegralAndError(1, nbins, error_CR2_bac_4, "");
    N_CR2_bac_5=hist_CR2_bkg_5->IntegralAndError(1, nbins, error_CR2_bac_5, "");
    N_CR2_bac_6=hist_CR2_bkg_6->IntegralAndError(1, nbins, error_CR2_bac_6, "");
    N_CR2_bac_7=hist_CR2_bkg_7->IntegralAndError(1, nbins, error_CR2_bac_7, "");
    N_CR2_bac_8=hist_CR2_bkg_8->IntegralAndError(1, nbins, error_CR2_bac_8, "");
    N_CR2_bac_9=hist_CR2_bkg_9->IntegralAndError(1, nbins, error_CR2_bac_9, "");
    N_CR2_bac_10=hist_CR2_bkg_10->IntegralAndError(1, nbins, error_CR2_bac_10, "");
    // N_CR2_bac_11=hist_CR2_bkg_11->IntegralAndError(1, nbins, error_CR2_bac_11, "");
    // N_CR2_bac_12=hist_CR2_bkg_12->IntegralAndError(1, nbins, error_CR2_bac_12, "");
    // N_CR2_bac_13=hist_CR2_bkg_13->IntegralAndError(1, nbins, error_CR2_bac_13, "");
    // N_CR2_bac_14=hist_CR2_bkg_14->IntegralAndError(1, nbins, error_CR2_bac_14, "");
    // N_CR2_bac_15=hist_CR2_bkg_15->IntegralAndError(1, nbins, error_CR2_bac_15, "");


    std::cout << "slice 1 " << " N_CR1_bac_1=" << N_CR1_bac_1 << " +- " << error_CR1_bac_1 << "    N_CR2_bac_1=" << N_CR2_bac_1 << " +- " << error_CR2_bac_1 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 2 " << " N_CR1_bac_2=" << N_CR1_bac_2 << " +- " << error_CR1_bac_2 << "    N_CR2_bac_2=" << N_CR2_bac_2 << " +- " << error_CR2_bac_2 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 3 " << " N_CR1_bac_3=" << N_CR1_bac_3 << " +- " << error_CR1_bac_3 << "    N_CR2_bac_3_bac=" << N_CR2_bac_3<< " +- " << error_CR2_bac_3 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 4 " << " N_CR1_bac_4=" << N_CR1_bac_4 << " +- " << error_CR1_bac_4 << "    N_CR2_bac_4=" << N_CR2_bac_4 << " +- " << error_CR2_bac_4 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 5 " <<" N_CR1_bac_5=" << N_CR1_bac_5 << " +- " << error_CR1_bac_5 << "    N_CR2_bac_5=" << N_CR2_bac_5 << " +- " << error_CR2_bac_5 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 6 " <<" N_CR1_bac_6=" << N_CR1_bac_6 << " +- " << error_CR1_bac_6 << "    N_CR2_bac_6=" << N_CR2_bac_6 << " +- " << error_CR2_bac_6 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 7 " <<" N_CR1_bac_7=" << N_CR1_bac_7 << " +- " << error_CR1_bac_7 << "    N_CR2_bac_7=" << N_CR2_bac_7 << " +- " << error_CR2_bac_7 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 8 " <<" N_CR1_bac_8=" << N_CR1_bac_8 << " +- " << error_CR1_bac_8 << "    N_CR2_bac_8=" << N_CR2_bac_8 << " +- " << error_CR2_bac_8 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 9 " <<" N_CR1_bac_9=" << N_CR1_bac_9 << " +- " << error_CR1_bac_9 << "    N_CR2_bac_9=" << N_CR2_bac_9 << " +- " << error_CR2_bac_9 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 10 " <<" N_CR1_bac_10=" << N_CR1_bac_10 << " +- " << error_CR1_bac_10 << "    N_CR2_bac_10=" << N_CR2_bac_10 << " +- " << error_CR2_bac_10 << '\n';
    std::cout << "" << '\n';
    //
    // std::cout << "slice 11 " <<" N_CR1_bac_11=" << N_CR1_bac_11 << " +- " << error_CR1_bac_11 << "    N_CR2_bac_11=" << N_CR2_bac_11 << " +- " << error_CR2_bac_11 << '\n';
    // std::cout << "" << '\n';
    //
    // std::cout << "slice 12 " <<" N_CR1_bac_12=" << N_CR1_bac_12 << " +- " << error_CR1_bac_12 << "    N_CR2_bac_12=" << N_CR2_bac_12 << " +- " << error_CR2_bac_12 << '\n';
    // std::cout << "" << '\n';
    //
    // std::cout << "slice 13 " <<" N_CR1_bac_13=" << N_CR1_bac_13 << " +- " << error_CR1_bac_13 << "    N_CR2_bac_13=" << N_CR2_bac_13 << " +- " << error_CR2_bac_13 << '\n';
    // std::cout << "" << '\n';
    //
    // std::cout << "slice 14 " <<" N_CR1_bac_14=" << N_CR1_bac_14 << " +- " << error_CR1_bac_14 << "    N_CR2_bac_14=" << N_CR2_bac_14 << " +- " << error_CR2_bac_14 << '\n';
    // std::cout << "" << '\n';
    //
    // std::cout << "slice 15 " <<" N_CR1_bac_15=" << N_CR1_bac_15 << " +- " << error_CR1_bac_15 << "    N_CR2_bac_15=" << N_CR2_bac_15 << " +- " << error_CR2_bac_15 << '\n';
    // std::cout << "" << '\n';


 }

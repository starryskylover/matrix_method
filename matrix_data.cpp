void matrix_data(){

  UInt_t n_ph, n_jet, n_e_looseBL, n_mu, ph_isem;
  Double_t ph_pt, ph_phi, ph_eta, ph_iso_et40, ph_iso_et20, ph_iso_pt, ph_z_point;
  Double_t jet_lead_phi,jet_lead_pt, jet_lead_eta, jet_sublead_phi, metTST_pt, metTST_phi, metTSTsignif;
  Double_t error_CR1_data_1, error_CR1_data_2, error_CR1_data_3, error_CR1_data_4, error_CR1_data_5, error_CR1_data_6, error_CR1_data_7, error_CR1_data_8, error_CR1_data_9, error_CR1_data_10, error_CR1_data_11, error_CR1_data_12, error_CR1_data_13, error_CR1_data_14, error_CR1_data_15, error_CR2_data_1, error_CR2_data_2, error_CR2_data_3, error_CR2_data_4, error_CR2_data_5, error_CR2_data_6, error_CR2_data_7, error_CR2_data_8, error_CR2_data_9, error_CR2_data_10, error_CR2_data_11, error_CR2_data_12, error_CR2_data_13, error_CR2_data_14, error_CR2_data_15;
  Double_t N_CR1_data_1, N_CR1_data_2, N_CR1_data_3, N_CR1_data_4, N_CR1_data_5, N_CR1_data_6, N_CR1_data_7, N_CR1_data_8, N_CR1_data_9, N_CR1_data_10, N_CR1_data_11, N_CR1_data_12, N_CR1_data_13, N_CR1_data_14, N_CR1_data_15, N_CR2_data_1, N_CR2_data_2, N_CR2_data_3, N_CR2_data_4, N_CR2_data_5, N_CR2_data_6, N_CR2_data_7, N_CR2_data_8, N_CR2_data_9, N_CR2_data_10, N_CR2_data_11, N_CR2_data_12, N_CR2_data_13, N_CR2_data_14, N_CR2_data_15;
  Int_t nbins=1;
  // Double_t xbins[4] = {120, 170, 270, 1200};

  // Double_t slice_1=0.065, slice_2=0.085, slice_3=0.105, slice_4=0.125, slice_5=0.145, slice_6=0.165, slice_7=0.185, slice_8=0.205, slice_cut=0.225;
  // Double_t slice_1=0.065, slice_2=0.09, slice_3=0.115, slice_4=0.14, slice_5=0.165;
  // Double_t slice_1=0.065, slice_2=0.075, slice_3=0.085, slice_4=0.095, slice_5=0.105, slice_6=0.115, slice_7=0.125, slice_8=0.135, slice_9=0.145, slice_10=0.155, slice_11=0.165, slice_12=0.175, slice_13=0.185, slice_14=0.195, slice_15=0.205, slice_cut=0.215;
     Double_t slice_1=0.065, slice_2=0.08, slice_3=0.095, slice_4=0.11, slice_5=0.125, slice_6=0.14, slice_7=0.155, slice_8=0.17, slice_9=0.185, slice_10=0.2, slice_11=0.215;
  // Double_t slice_1=0.024, slice_2=0.034, slice_3=0.044, slice_4=0.054, slice_5=0.065, slice_6=0.075;

  TH1D *hist_CR1_data_1 = new TH1D ("hist_CR1_data_1", "hist_CR1_data_1", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_2 = new TH1D ("hist_CR1_data_2", "hist_CR1_data_2", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_3 = new TH1D ("hist_CR1_data_3", "hist_CR1_data_3", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_4 = new TH1D ("hist_CR1_data_4", "hist_CR1_data_4", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_5 = new TH1D ("hist_CR1_data_5", "hist_CR1_data_5", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_6 = new TH1D ("hist_CR1_data_6", "hist_CR1_data_6", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_7 = new TH1D ("hist_CR1_data_7", "hist_CR1_data_7", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_8 = new TH1D ("hist_CR1_data_8", "hist_CR1_data_8", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_9 = new TH1D ("hist_CR1_data_9", "hist_CR1_data_9", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_10 = new TH1D ("hist_CR1_data_10", "hist_CR1_data_10", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_11 = new TH1D ("hist_CR1_data_11", "hist_CR1_data_11", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_12 = new TH1D ("hist_CR1_data_12", "hist_CR1_data_12", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_13 = new TH1D ("hist_CR1_data_13", "hist_CR1_data_13", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_14 = new TH1D ("hist_CR1_data_14", "hist_CR1_data_14", nbins, 0.5, 1.5);
  TH1D *hist_CR1_data_15 = new TH1D ("hist_CR1_data_15", "hist_CR1_data_15", nbins, 0.5, 1.5);

  TH1D *hist_CR2_data_1 = new TH1D ("hist_CR2_data_1", "hist_CR2_data_1", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_2 = new TH1D ("hist_CR2_data_2", "hist_CR2_data_2", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_3 = new TH1D ("hist_CR2_data_3", "hist_CR2_data_3", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_4 = new TH1D ("hist_CR2_data_4", "hist_CR2_data_4", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_5 = new TH1D ("hist_CR2_data_5", "hist_CR2_data_5", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_6 = new TH1D ("hist_CR2_data_6", "hist_CR2_data_6", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_7 = new TH1D ("hist_CR2_data_7", "hist_CR2_data_7", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_8 = new TH1D ("hist_CR2_data_8", "hist_CR2_data_8", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_9 = new TH1D ("hist_CR2_data_9", "hist_CR2_data_9", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_10 = new TH1D ("hist_CR2_data_10", "hist_CR2_data_10", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_11 = new TH1D ("hist_CR2_data_11", "hist_CR2_data_11", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_12 = new TH1D ("hist_CR2_data_12", "hist_CR2_data_12", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_13 = new TH1D ("hist_CR2_data_13", "hist_CR2_data_13", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_14 = new TH1D ("hist_CR2_data_14", "hist_CR2_data_14", nbins, 0.5, 1.5);
  TH1D *hist_CR2_data_15 = new TH1D ("hist_CR2_data_15", "hist_CR2_data_15", nbins, 0.5, 1.5);

  // hist_FR_data_1 = dynamic_cast<TH1D*>(hist_FR_data_1->Rebin(nbins,"hist1",xbins));
  // hist_FR_data_2 = dynamic_cast<TH1D*>(hist_FR_data_2->Rebin(nbins,"hist2",xbins));
  // hist_FR_data_3 = dynamic_cast<TH1D*>(hist_FR_data_3->Rebin(nbins,"hist3",xbins));
  // hist_FR_data_4 = dynamic_cast<TH1D*>(hist_FR_data_4->Rebin(nbins,"hist4",xbins));
  // hist_FR_data_5 = dynamic_cast<TH1D*>(hist_FR_data_5->Rebin(nbins,"hist5",xbins));
  //
  // hist_CR1_data_1 = dynamic_cast<TH1D*>(hist_CR1_data_1->Rebin(nbins,"hist1",xbins));
  // hist_CR1_data_2 = dynamic_cast<TH1D*>(hist_CR1_data_2->Rebin(nbins,"hist2",xbins));
  // hist_CR1_data_3 = dynamic_cast<TH1D*>(hist_CR1_data_3->Rebin(nbins,"hist3",xbins));
  // hist_CR1_data_4 = dynamic_cast<TH1D*>(hist_CR1_data_4->Rebin(nbins,"hist4",xbins));
  // hist_CR1_data_5 = dynamic_cast<TH1D*>(hist_CR1_data_5->Rebin(nbins,"hist5",xbins));
  //
  // hist_CR2_data_1 = dynamic_cast<TH1D*>(hist_CR2_data_1->Rebin(nbins,"hist1",xbins));
  // hist_CR2_data_2 = dynamic_cast<TH1D*>(hist_CR2_data_2->Rebin(nbins,"hist2",xbins));
  // hist_CR2_data_3 = dynamic_cast<TH1D*>(hist_CR2_data_3->Rebin(nbins,"hist3",xbins));
  // hist_CR2_data_4 = dynamic_cast<TH1D*>(hist_CR2_data_4->Rebin(nbins,"hist4",xbins));
  // hist_CR2_data_5 = dynamic_cast<TH1D*>(hist_CR2_data_5->Rebin(nbins,"hist5",xbins));

  const char *path = "/home/valerian/programs/R_factor_MC/private/data_full_checked/data15-18.reproc-30-09-21_full_checked.root";

    TFile *data = new TFile(path, "READ");
    TTree *tree = (TTree*)data->Get("output_tree");

    tree->SetBranchAddress("n_ph", &n_ph);
    tree->SetBranchAddress("n_jet", &n_jet);
    tree->SetBranchAddress("n_e_looseBL", &n_e_looseBL);
    tree->SetBranchAddress("n_mu", &n_mu);
    tree->SetBranchAddress("ph_pt",&ph_pt);
    tree->SetBranchAddress("ph_phi",&ph_phi);
    tree->SetBranchAddress("ph_eta",&ph_eta);
    tree->SetBranchAddress("ph_iso_et20", &ph_iso_et20);
    tree->SetBranchAddress("ph_iso_pt", &ph_iso_pt);
    tree->SetBranchAddress("ph_isem", &ph_isem);
    tree->SetBranchAddress("ph_z_point", &ph_z_point);
    tree->SetBranchAddress("jet_lead_phi",&jet_lead_phi);
    tree->SetBranchAddress("jet_lead_pt",&jet_lead_pt);
    tree->SetBranchAddress("jet_lead_eta",&jet_lead_eta);
    tree->SetBranchAddress("metTST_pt", &metTST_pt);
    tree->SetBranchAddress("metTST_phi",&metTST_phi);
    tree->SetBranchAddress("metTSTsignif", &metTSTsignif);

    int entry = (int)tree->GetEntries();

    for (int i=0; i<entry; i++){
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
    // if (l < 23 && fabs(weight) >= 100) continue;
    if (metTST_pt <=130) continue;                             //Потеренная поперечная энергия(модуль вектора потеренного поперечного импульса)
    if (metTSTsignif <= 11) continue;                          //Значимость, отделяющая события с правдивой величиной от события с ложной величиной потерянной поперечной энергии
    // if (mc_ph_type >= 13 && mc_ph_type <= 15) continue;
    if (dphi_1 <= 0.7) continue;                               //Разность азимутальных углов
    if (n_jet >= 1 && dphi_2 <= 0.4) continue;

  //  Double_t Iso_gap = 2;
  //  UInt_t Loose2=0x27fc01, Loose3=0x25fc01, Loose4=0x5fc01, Loose5=0x1fc01;

    Double_t Iso_cal = ph_iso_et20/ph_pt;                       //Калориметрическая изоляция, сооответствующая изоляции FixedCutLoose
    Double_t Iso_track = ph_iso_pt/ph_pt;                       //Трековая изоляция


    // if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_1->Fill(n_ph, 1.0); //неизолированная область с жестким фотоном
    // if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_2->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_3->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_4->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_5->Fill(n_ph, 1.0);
    //
    // // if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05) hist_CR2_data_1->Fill(n_ph, 1.0);   //неизолированная область с мягким фотоном
    // // if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05) hist_CR2_data_2->Fill(n_ph, 1.0);
    // // if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05) hist_CR2_data_3->Fill(n_ph, 1.0);
    // // if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05) hist_CR2_data_4->Fill(n_ph, 1.0);
    // // if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05) hist_CR2_data_5->Fill(n_ph, 1.0);
    //
    // if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_1->Fill(n_ph, 1.0);   //неизолированная область с нежестким фотоном
    // if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_2->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_3->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_4->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_5->Fill(n_ph, 1.0);

    if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_1->Fill(n_ph, 1.0); //неизолированная область с жестким фотоном
    if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_2->Fill(n_ph, 1.0);
    if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_3->Fill(n_ph, 1.0);
    if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_4->Fill(n_ph, 1.0);
    if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_5->Fill(n_ph, 1.0);
    if (Iso_cal > slice_6 && Iso_cal < slice_7 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_6->Fill(n_ph, 1.0);
    if (Iso_cal > slice_7 && Iso_cal < slice_8 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_7->Fill(n_ph, 1.0);
    if (Iso_cal > slice_8 && Iso_cal < slice_9 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_8->Fill(n_ph, 1.0);
    if (Iso_cal > slice_9 && Iso_cal < slice_10 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_9->Fill(n_ph, 1.0);
    if (Iso_cal > slice_10 && Iso_cal < slice_11 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_10->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_11 && Iso_cal < slice_12 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_11->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_12 && Iso_cal < slice_13 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_12->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_13 && Iso_cal < slice_14 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_13->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_14 && Iso_cal < slice_15 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_14->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_15 && Iso_cal < slice_cut && Iso_track > 0.05 && ph_isem == 0) hist_CR1_data_15->Fill(n_ph, 1.0);

    // if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05) hist_CR2_data_1->Fill(n_ph, 1.0);   //неизолированная область с мягким фотоном
    // if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05) hist_CR2_data_2->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05) hist_CR2_data_3->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05) hist_CR2_data_4->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05) hist_CR2_data_5->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_6 && Iso_cal < slice_7 && Iso_track > 0.05) hist_CR2_data_6->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_7 && Iso_cal < slice_8 && Iso_track > 0.05) hist_CR2_data_7->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_8 && Iso_cal < slice_9 && Iso_track > 0.05) hist_CR2_data_8->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_9 && Iso_cal < slice_10 && Iso_track > 0.05) hist_CR2_data_9->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_10 && Iso_cal < slice_11 && Iso_track > 0.05) hist_CR2_data_10->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_11 && Iso_cal < slice_12 && Iso_track > 0.05) hist_CR2_data_11->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_12 && Iso_cal < slice_13 && Iso_track > 0.05) hist_CR2_data_12->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_13 && Iso_cal < slice_14 && Iso_track > 0.05) hist_CR2_data_13->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_14 && Iso_cal < slice_15 && Iso_track > 0.05) hist_CR2_data_14->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_15 && Iso_cal < slice_cut && Iso_track > 0.05) hist_CR2_data_15->Fill(n_ph, 1.0);

    if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_1->Fill(n_ph, 1.0);   //неизолированная область с нежестким фотоном
    if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_2->Fill(n_ph, 1.0);
    if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_3->Fill(n_ph, 1.0);
    if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_4->Fill(n_ph, 1.0);
    if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_5->Fill(n_ph, 1.0);
    if (Iso_cal > slice_6 && Iso_cal < slice_7 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_6->Fill(n_ph, 1.0);
    if (Iso_cal > slice_7 && Iso_cal < slice_8 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_7->Fill(n_ph, 1.0);
    if (Iso_cal > slice_8 && Iso_cal < slice_9 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_8->Fill(n_ph, 1.0);
    if (Iso_cal > slice_9 && Iso_cal < slice_10 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_9->Fill(n_ph, 1.0);
    if (Iso_cal > slice_10 && Iso_cal < slice_11 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_10->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_11 && Iso_cal < slice_12 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_11->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_12 && Iso_cal < slice_13 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_12->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_13 && Iso_cal < slice_14 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_13->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_14 && Iso_cal < slice_15 && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_14->Fill(n_ph, 1.0);
    // if (Iso_cal > slice_15 && Iso_cal < slice_cut && Iso_track > 0.05 && ph_isem != 0) hist_CR2_data_15->Fill(n_ph, 1.0);
  }

  // Double_t overflow_FR_1 = hist_FR_data_1->GetBinContent(nbins)+hist_FR_data_1->GetBinContent(nbins+1);
  // Double_t overflow_FR_2 = hist_FR_data_2->GetBinContent(nbins)+hist_FR_data_2->GetBinContent(nbins+1);
  // Double_t overflow_FR_3 = hist_FR_data_3->GetBinContent(nbins)+hist_FR_data_3->GetBinContent(nbins+1);
  // Double_t overflow_FR_4 = hist_FR_data_4->GetBinContent(nbins)+hist_FR_data_4->GetBinContent(nbins+1);
  // Double_t overflow_FR_5 = hist_FR_data_5->GetBinContent(nbins)+hist_FR_data_5->GetBinContent(nbins+1);
  //
  // Double_t overflow_CR1_1 = hist_CR1_data_1->GetBinContent(nbins)+hist_CR1_data_1->GetBinContent(nbins+1);
  // Double_t overflow_CR1_2 = hist_CR1_data_2->GetBinContent(nbins)+hist_CR1_data_2->GetBinContent(nbins+1);
  // Double_t overflow_CR1_3 = hist_CR1_data_3->GetBinContent(nbins)+hist_CR1_data_3->GetBinContent(nbins+1);
  // Double_t overflow_CR1_4 = hist_CR1_data_4->GetBinContent(nbins)+hist_CR1_data_4->GetBinContent(nbins+1);
  // Double_t overflow_CR1_5 = hist_CR1_data_5->GetBinContent(nbins)+hist_CR1_data_5->GetBinContent(nbins+1);
  //
  // Double_t overflow_CR2_1= hist_CR2_data_1->GetBinContent(nbins)+hist_CR2_data_1->GetBinContent(nbins+1);
  // Double_t overflow_CR2_2= hist_CR2_data_2->GetBinContent(nbins)+hist_CR2_data_2->GetBinContent(nbins+1);
  // Double_t overflow_CR2_3= hist_CR2_data_3->GetBinContent(nbins)+hist_CR2_data_3->GetBinContent(nbins+1);
  // Double_t overflow_CR2_4= hist_CR2_data_4->GetBinContent(nbins)+hist_CR2_data_4->GetBinContent(nbins+1);
  // Double_t overflow_CR2_5= hist_CR2_data_5->GetBinContent(nbins)+hist_CR2_data_5->GetBinContent(nbins+1);
  //
  // hist_FR_data_1->SetBinContent(nbins, overflow_FR_1);
  // hist_FR_data_2->SetBinContent(nbins, overflow_FR_2);
  // hist_FR_data_3->SetBinContent(nbins, overflow_FR_3);
  // hist_FR_data_4->SetBinContent(nbins, overflow_FR_4);
  // hist_FR_data_5->SetBinContent(nbins, overflow_FR_5);
  //
  // hist_CR1_data_1->SetBinContent(nbins, overflow_CR1_1);
  // hist_CR1_data_2->SetBinContent(nbins, overflow_CR1_2);
  // hist_CR1_data_3->SetBinContent(nbins, overflow_CR1_3);
  // hist_CR1_data_4->SetBinContent(nbins, overflow_CR1_4);
  // hist_CR1_data_5->SetBinContent(nbins, overflow_CR1_5);
  //
  // hist_CR2_data_1->SetBinContent(nbins, overflow_CR2_1);
  // hist_CR2_data_2->SetBinContent(nbins, overflow_CR2_2);
  // hist_CR2_data_3->SetBinContent(nbins, overflow_CR2_3);
  // hist_CR2_data_4->SetBinContent(nbins, overflow_CR2_4);
  // hist_CR2_data_5->SetBinContent(nbins, overflow_CR2_5);
  //
  // Double_t overflow_err_FR_1 = sqrt(pow(hist_FR_data_1->GetBinError(nbins), 2) + pow(hist_FR_data_1->GetBinError(nbins+1), 2));
  // Double_t overflow_err_FR_2 = sqrt(pow(hist_FR_data_2->GetBinError(nbins), 2) + pow(hist_FR_data_2->GetBinError(nbins+1), 2));
  // Double_t overflow_err_FR_3 = sqrt(pow(hist_FR_data_3->GetBinError(nbins), 2) + pow(hist_FR_data_3->GetBinError(nbins+1), 2));
  // Double_t overflow_err_FR_4 = sqrt(pow(hist_FR_data_4->GetBinError(nbins), 2) + pow(hist_FR_data_4->GetBinError(nbins+1), 2));
  // Double_t overflow_err_FR_5 = sqrt(pow(hist_FR_data_5->GetBinError(nbins), 2) + pow(hist_FR_data_5->GetBinError(nbins+1), 2));
  //
  // Double_t overflow_err_CR1_1 = sqrt(pow(hist_CR1_data_1->GetBinError(nbins), 2) + pow(hist_CR1_data_1->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR1_2 = sqrt(pow(hist_CR1_data_2->GetBinError(nbins), 2) + pow(hist_CR1_data_2->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR1_3 = sqrt(pow(hist_CR1_data_3->GetBinError(nbins), 2) + pow(hist_CR1_data_3->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR1_4 = sqrt(pow(hist_CR1_data_4->GetBinError(nbins), 2) + pow(hist_CR1_data_4->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR1_5 = sqrt(pow(hist_CR1_data_5->GetBinError(nbins), 2) + pow(hist_CR1_data_5->GetBinError(nbins+1), 2));
  //
  // Double_t overflow_err_CR2_1 = sqrt(pow(hist_CR2_data_1->GetBinError(nbins), 2) + pow(hist_CR2_data_1->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR2_2 = sqrt(pow(hist_CR2_data_2->GetBinError(nbins), 2) + pow(hist_CR2_data_2->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR2_3 = sqrt(pow(hist_CR2_data_3->GetBinError(nbins), 2) + pow(hist_CR2_data_3->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR2_4 = sqrt(pow(hist_CR2_data_4->GetBinError(nbins), 2) + pow(hist_CR2_data_4->GetBinError(nbins+1), 2));
  // Double_t overflow_err_CR2_5 = sqrt(pow(hist_CR2_data_5->GetBinError(nbins), 2) + pow(hist_CR2_data_5->GetBinError(nbins+1), 2));
  //
  // hist_FR_data_1->SetBinError(nbins, overflow_err_FR_1);
  // hist_FR_data_2->SetBinError(nbins, overflow_err_FR_2);
  // hist_FR_data_3->SetBinError(nbins, overflow_err_FR_3);
  // hist_FR_data_4->SetBinError(nbins, overflow_err_FR_4);
  // hist_FR_data_5->SetBinError(nbins, overflow_err_FR_5);
  //
  // hist_CR1_data_1->SetBinError(nbins, overflow_err_CR1_1);
  // hist_CR1_data_2->SetBinError(nbins, overflow_err_CR1_2);
  // hist_CR1_data_3->SetBinError(nbins, overflow_err_CR1_3);
  // hist_CR1_data_4->SetBinError(nbins, overflow_err_CR1_4);
  // hist_CR1_data_5->SetBinError(nbins, overflow_err_CR1_5);
  //
  // hist_CR2_data_1->SetBinError(nbins, overflow_err_CR2_1);
  // hist_CR2_data_2->SetBinError(nbins, overflow_err_CR2_2);
  // hist_CR2_data_3->SetBinError(nbins, overflow_err_CR2_3);
  // hist_CR2_data_4->SetBinError(nbins, overflow_err_CR2_4);
  // hist_CR2_data_5->SetBinError(nbins, overflow_err_CR2_5);
  //
  // TFile *file_CR1 = new TFile ("CR1_data_MM.root","RECREATE");
  // hist_CR1_data_1->Write();
  // hist_CR1_data_2->Write();
  // hist_CR1_data_3->Write();
  // hist_CR1_data_4->Write();
  // hist_CR1_data_5->Write();
  // hist_CR1_data_6->Write();
  // hist_CR1_data_7->Write();
  // hist_CR1_data_8->Write();
  // hist_CR1_data_9->Write();
  // hist_CR1_data_10->Write();
  // hist_CR1_data_11->Write();
  // hist_CR1_data_12->Write();
  // hist_CR1_data_13->Write();
  // hist_CR1_data_14->Write();
  // hist_CR1_data_15->Write();
  // file_CR1->Close();
  //
  // TFile *file_CR2 = new TFile ("CR2_data_MM.root","RECREATE");
  // hist_CR2_data_1->Write();
  // hist_CR2_data_2->Write();
  // hist_CR2_data_3->Write();
  // hist_CR2_data_4->Write();
  // hist_CR2_data_5->Write();
  // hist_CR2_data_6->Write();
  // hist_CR2_data_7->Write();
  // hist_CR2_data_8->Write();
  // hist_CR2_data_9->Write();
  // hist_CR2_data_10->Write();
  // hist_CR2_data_11->Write();
  // hist_CR2_data_12->Write();
  // hist_CR2_data_13->Write();
  // hist_CR2_data_14->Write();
  // hist_CR2_data_15->Write();
  // file_CR2->Close();

  N_CR1_data_1=hist_CR1_data_1->IntegralAndError(1, nbins, error_CR1_data_1, "");
  N_CR1_data_2=hist_CR1_data_2->IntegralAndError(1, nbins, error_CR1_data_2, "");
  N_CR1_data_3=hist_CR1_data_3->IntegralAndError(1, nbins, error_CR1_data_3, "");
  N_CR1_data_4=hist_CR1_data_4->IntegralAndError(1, nbins, error_CR1_data_4, "");
  N_CR1_data_5=hist_CR1_data_5->IntegralAndError(1, nbins, error_CR1_data_5, "");
  N_CR1_data_6=hist_CR1_data_6->IntegralAndError(1, nbins, error_CR1_data_6, "");
  N_CR1_data_7=hist_CR1_data_7->IntegralAndError(1, nbins, error_CR1_data_7, "");
  N_CR1_data_8=hist_CR1_data_8->IntegralAndError(1, nbins, error_CR1_data_8, "");
  N_CR1_data_9=hist_CR1_data_9->IntegralAndError(1, nbins, error_CR1_data_9, "");
  N_CR1_data_10=hist_CR1_data_10->IntegralAndError(1, nbins, error_CR1_data_10, "");
  // N_CR1_data_11=hist_CR1_data_11->IntegralAndError(1, nbins, error_CR1_data_11, "");
  // N_CR1_data_12=hist_CR1_data_12->IntegralAndError(1, nbins, error_CR1_data_12, "");
  // N_CR1_data_13=hist_CR1_data_13->IntegralAndError(1, nbins, error_CR1_data_13, "");
  // N_CR1_data_14=hist_CR1_data_14->IntegralAndError(1, nbins, error_CR1_data_14, "");
  // N_CR1_data_15=hist_CR1_data_15->IntegralAndError(1, nbins, error_CR1_data_15, "");

  N_CR2_data_1=hist_CR2_data_1->IntegralAndError(1, nbins, error_CR2_data_1, "");
  N_CR2_data_2=hist_CR2_data_2->IntegralAndError(1, nbins, error_CR2_data_2, "");
  N_CR2_data_3=hist_CR2_data_3->IntegralAndError(1, nbins, error_CR2_data_3, "");
  N_CR2_data_4=hist_CR2_data_4->IntegralAndError(1, nbins, error_CR2_data_4, "");
  N_CR2_data_5=hist_CR2_data_5->IntegralAndError(1, nbins, error_CR2_data_5, "");
  N_CR2_data_6=hist_CR2_data_6->IntegralAndError(1, nbins, error_CR2_data_6, "");
  N_CR2_data_7=hist_CR2_data_7->IntegralAndError(1, nbins, error_CR2_data_7, "");
  N_CR2_data_8=hist_CR2_data_8->IntegralAndError(1, nbins, error_CR2_data_8, "");
  N_CR2_data_9=hist_CR2_data_9->IntegralAndError(1, nbins, error_CR2_data_9, "");
  N_CR2_data_10=hist_CR2_data_10->IntegralAndError(1, nbins, error_CR2_data_10, "");
  // N_CR2_data_11=hist_CR2_data_11->IntegralAndError(1, nbins, error_CR2_data_11, "");
  // N_CR2_data_12=hist_CR2_data_12->IntegralAndError(1, nbins, error_CR2_data_12, "");
  // N_CR2_data_13=hist_CR2_data_13->IntegralAndError(1, nbins, error_CR2_data_13, "");
  // N_CR2_data_14=hist_CR2_data_14->IntegralAndError(1, nbins, error_CR2_data_14, "");
  // N_CR2_data_15=hist_CR2_data_15->IntegralAndError(1, nbins, error_CR2_data_15, "");


  std::cout << "slice 1 " << " N_CR1_data_1=" << N_CR1_data_1 << " +- " << error_CR1_data_1 << "    N_CR2_data_1=" << N_CR2_data_1 << " +- " << error_CR2_data_1 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 2 " << " N_CR1_data_2=" << N_CR1_data_2 << " +- " << error_CR1_data_2 << "    N_CR2_data_2=" << N_CR2_data_2 << " +- " << error_CR2_data_2 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 3 " << " N_CR1_data_3=" << N_CR1_data_3 << " +- " << error_CR1_data_3 << "     N_CR2_data_3_data=" << N_CR2_data_3<< " +- " << error_CR2_data_3 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 4 " << " N_CR1_data_4=" << N_CR1_data_4 << " +- " << error_CR1_data_4 << "         N_CR2_data_4=" << N_CR2_data_4 << " +- " << error_CR2_data_4 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 5 " <<" N_CR1_data_5=" << N_CR1_data_5 << " +- " << error_CR1_data_5 << "      N_CR2_data_5=" << N_CR2_data_5 << " +- " << error_CR2_data_5 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 6 " <<" N_CR1_data_6=" << N_CR1_data_6 << " +- " << error_CR1_data_6 << "      N_CR2_data_6=" << N_CR2_data_6 << " +- " << error_CR2_data_6 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 7 " <<" N_CR1_data_7=" << N_CR1_data_7 << " +- " << error_CR1_data_7 << "      N_CR2_data_7=" << N_CR2_data_7 << " +- " << error_CR2_data_7 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 8 " <<" N_CR1_data_8=" << N_CR1_data_8 << " +- " << error_CR1_data_8 << "      N_CR2_data_8=" << N_CR2_data_8 << " +- " << error_CR2_data_8 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 9 " << " N_CR1_data_9=" << N_CR1_data_9 << " +- " << error_CR1_data_9 << "    N_CR2_data_9=" << N_CR2_data_9 << " +- " << error_CR2_data_9 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 10 " << " N_CR1_data_10=" << N_CR1_data_10 << " +- " << error_CR1_data_10 << "     N_CR2_data_10_data=" << N_CR2_data_10<< " +- " << error_CR2_data_10 << '\n';
  std::cout << "" << '\n';
  //
  // std::cout << "slice 11 " << " N_CR1_data_11=" << N_CR1_data_11 << " +- " << error_CR1_data_11 << "         N_CR2_data_11=" << N_CR2_data_11 << " +- " << error_CR2_data_11 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 12 " <<" N_CR1_data_12=" << N_CR1_data_12 << " +- " << error_CR1_data_12 << "      N_CR2_data_12=" << N_CR2_data_12 << " +- " << error_CR2_data_12 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 13 " <<" N_CR1_data_13=" << N_CR1_data_13 << " +- " << error_CR1_data_13 << "      N_CR2_data_13=" << N_CR2_data_13 << " +- " << error_CR2_data_13 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 14 " <<" N_CR1_data_14=" << N_CR1_data_14 << " +- " << error_CR1_data_14 << "      N_CR2_data_14=" << N_CR2_data_14 << " +- " << error_CR2_data_14 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 15 " <<" N_CR1_data_15=" << N_CR1_data_15 << " +- " << error_CR1_data_15 << "      N_CR2_data_15=" << N_CR2_data_15 << " +- " << error_CR2_data_15 << '\n';
  // std::cout << "" << '\n';

  // Double_t r_1=0.82, r_2=0.81, r_3=0.81, r_4=0.76, r_5=0.77, r_6=0.78, r_7=0.74, r_8=0.73, r_9=0.76, r_10=0.72, r_11=0.71, r_12=0.73, r_13=0.68, r_14=0.71, r_15=0.69, f_1=0.138, f_2=0.114, f_3=0.106, f_4=0.076, f_5=0.070, f_6=0.069, f_7=0.053, f_8=0.042, f_9=0.045, f_10=0.030, f_11=0.036, f_12=0.021, f_13=0.026, f_14=0.024, f_15=0.054;
  // Double_t err_r_1=0.04, err_r_2=0.03, err_r_3=0.04, err_r_4=0.04, err_r_5=0.04, err_r_6=0.04, err_r_7=0.04, err_r_8=0.04, err_r_9=0.04, err_r_10=0.04, err_r_11=0.04, err_r_12=0.04, err_r_13=0.05, err_r_14=0.04, err_r_15=0.05, err_f_1=0.010, err_f_2=0.009, err_f_3=0.009, err_f_4=0.008, err_f_5=0.009, err_f_6=0.008, err_f_7=0.008, err_f_8=0.007, err_f_9=0.008, err_f_10=0.007, err_f_11=0.008, err_f_12=0.007, err_f_13=0.008, err_f_14=0.009, err_f_15=0.013;
  // Double_t r_1=0.81, r_2=0.78, r_3=0.76, r_4=0.73, f_1=0.124, f_2=0.078, f_3=0.057, f_4=0.048; Katerina
  // Double_t err_r_1=0.02, err_r_2=0.02, err_r_3=0.02, err_r_4=0.02, err_f_1=0.006, err_f_2=0.005, err_f_3=0.005, err_f_4=0.005;
  // Double_t r_1=0.90, r_2=0.89, r_3=0.85, r_4=0.83, r_5=0.82, f_1=0.27, f_2=0.222, f_3=0.195, f_4=0.149, f_5=0.141;
  // Double_t err_r_1=0.03, err_r_2=0.03, err_r_3=0.03, err_r_4=0.03, err_r_5=0.04, err_f_1=0.04, err_f_2=0.014, err_f_3=0.012, err_f_4=0.010, err_f_5=0.011;

  Double_t r_1=0.83, r_2=0.83, r_3=0.732, r_4=0.83, r_5=0.76, r_6=0.72, r_7=0.71, r_8=0.73, r_9=0.75, r_10=0.81, f_1=0.132, f_2=0.104, f_3=0.070, f_4=0.071, f_5=0.045, f_6=0.053, f_7=0.041, f_8=0.032, f_9=0.019, f_10=0.031;
  Double_t err_r_1=0.09, err_r_2=0.11, err_r_3=0.010, err_r_4=0.10, err_r_5=0.10, err_r_6=0.12, err_r_7=0.12, err_r_8=0.14, err_r_9=0.10, err_r_10=0.12, err_f_1=0.008, err_f_2=0.008, err_f_3=0.007, err_f_4=0.007, err_f_5=0.006, err_f_6=0.007, err_f_7=0.007, err_f_8=0.007, err_f_9=0.007, err_f_10=0.010;

  Double_t error_CR_jetgamma_1=sqrt(pow(f_1*err_r_1*(N_CR1_data_1-f_1*(N_CR1_data_1+N_CR2_data_1))/pow(r_1-f_1,2),2)+pow(r_1*err_f_1*(r_1*(N_CR1_data_1+N_CR2_data_1)-N_CR1_data_1)/pow(r_1-f_1,2),2)+pow(f_1*(r_1-1)*error_CR1_data_1/(r_1-f_1),2)+pow(f_1*r_1*error_CR2_data_1/(r_1-f_1),2));
  Double_t error_CR_jetgamma_2=sqrt(pow(f_2*err_r_2*(N_CR1_data_2-f_2*(N_CR1_data_2+N_CR2_data_2))/pow(r_2-f_2,2),2)+pow(r_2*err_f_2*(r_2*(N_CR1_data_2+N_CR2_data_2)-N_CR1_data_2)/pow(r_2-f_2,2),2)+pow(f_2*(r_2-1)*error_CR1_data_2/(r_2-f_2),2)+pow(f_2*r_2*error_CR2_data_2/(r_2-f_2),2));
  Double_t error_CR_jetgamma_3=sqrt(pow(f_3*err_r_3*(N_CR1_data_3-f_3*(N_CR1_data_3+N_CR2_data_3))/pow(r_3-f_3,2),2)+pow(r_3*err_f_3*(r_3*(N_CR1_data_3+N_CR2_data_3)-N_CR1_data_3)/pow(r_3-f_3,2),2)+pow(f_3*(r_3-1)*error_CR1_data_3/(r_3-f_3),2)+pow(f_3*r_3*error_CR2_data_3/(r_3-f_3),2));
  Double_t error_CR_jetgamma_4=sqrt(pow(f_4*err_r_4*(N_CR1_data_4-f_4*(N_CR1_data_4+N_CR2_data_4))/pow(r_4-f_4,2),2)+pow(r_4*err_f_4*(r_4*(N_CR1_data_4+N_CR2_data_4)-N_CR1_data_4)/pow(r_4-f_4,2),2)+pow(f_4*(r_4-1)*error_CR1_data_4/(r_4-f_4),2)+pow(f_4*r_4*error_CR2_data_4/(r_4-f_4),2));
  Double_t error_CR_jetgamma_5=sqrt(pow(f_5*err_r_5*(N_CR1_data_5-f_5*(N_CR1_data_5+N_CR2_data_5))/pow(r_5-f_5,2),2)+pow(r_5*err_f_5*(r_5*(N_CR1_data_5+N_CR2_data_5)-N_CR1_data_5)/pow(r_5-f_5,2),2)+pow(f_5*(r_5-1)*error_CR1_data_5/(r_5-f_5),2)+pow(f_5*r_5*error_CR2_data_5/(r_5-f_5),2));
  Double_t error_CR_jetgamma_6=sqrt(pow(f_6*err_r_6*(N_CR1_data_6-f_6*(N_CR1_data_6+N_CR2_data_6))/pow(r_6-f_6,2),2)+pow(r_6*err_f_6*(r_6*(N_CR1_data_6+N_CR2_data_6)-N_CR1_data_6)/pow(r_6-f_6,2),2)+pow(f_6*(r_6-1)*error_CR1_data_6/(r_6-f_6),2)+pow(f_6*r_6*error_CR2_data_6/(r_6-f_6),2));
  Double_t error_CR_jetgamma_7=sqrt(pow(f_7*err_r_7*(N_CR1_data_7-f_7*(N_CR1_data_7+N_CR2_data_7))/pow(r_7-f_7,2),2)+pow(r_7*err_f_7*(r_7*(N_CR1_data_7+N_CR2_data_7)-N_CR1_data_7)/pow(r_7-f_7,2),2)+pow(f_7*(r_7-1)*error_CR1_data_7/(r_7-f_7),2)+pow(f_7*r_7*error_CR2_data_7/(r_7-f_7),2));
  Double_t error_CR_jetgamma_8=sqrt(pow(f_8*err_r_8*(N_CR1_data_8-f_8*(N_CR1_data_8+N_CR2_data_8))/pow(r_8-f_8,2),2)+pow(r_8*err_f_8*(r_8*(N_CR1_data_8+N_CR2_data_8)-N_CR1_data_8)/pow(r_8-f_8,2),2)+pow(f_8*(r_8-1)*error_CR1_data_8/(r_8-f_8),2)+pow(f_8*r_8*error_CR2_data_8/(r_8-f_8),2));
  Double_t error_CR_jetgamma_9=sqrt(pow(f_9*err_r_9*(N_CR1_data_9-f_9*(N_CR1_data_9+N_CR2_data_9))/pow(r_9-f_9,2),2)+pow(r_9*err_f_9*(r_9*(N_CR1_data_9+N_CR2_data_9)-N_CR1_data_9)/pow(r_9-f_9,2),2)+pow(f_9*(r_9-1)*error_CR1_data_9/(r_9-f_9),2)+pow(f_9*r_9*error_CR2_data_9/(r_9-f_9),2));
  Double_t error_CR_jetgamma_10=sqrt(pow(f_10*err_r_10*(N_CR1_data_10-f_10*(N_CR1_data_10+N_CR2_data_10))/pow(r_10-f_10,2),2)+pow(r_10*err_f_10*(r_10*(N_CR1_data_10+N_CR2_data_10)-N_CR1_data_10)/pow(r_10-f_10,2),2)+pow(f_10*(r_10-1)*error_CR1_data_10/(r_10-f_10),2)+pow(f_10*r_10*error_CR2_data_10/(r_10-f_10),2));
  // Double_t error_CR_jetgamma_11=sqrt(pow(f_11*err_r_11*(N_CR1_data_11-f_11*(N_CR1_data_11+N_CR2_data_11))/pow(r_11-f_11,2),2)+pow(r_11*err_f_11*(r_11*(N_CR1_data_11+N_CR2_data_11)-N_CR1_data_11)/pow(r_11-f_11,2),2)+pow(f_11*(r_11-1)*error_CR1_data_11/(r_11-f_11),2)+pow(f_11*r_11*error_CR2_data_11/(r_11-f_11),2));
  // Double_t error_CR_jetgamma_12=sqrt(pow(f_12*err_r_12*(N_CR1_data_12-f_12*(N_CR1_data_12+N_CR2_data_12))/pow(r_12-f_12,2),2)+pow(r_12*err_f_12*(r_12*(N_CR1_data_12+N_CR2_data_12)-N_CR1_data_12)/pow(r_12-f_12,2),2)+pow(f_12*(r_12-1)*error_CR1_data_12/(r_12-f_12),2)+pow(f_12*r_12*error_CR2_data_12/(r_12-f_12),2));
  // Double_t error_CR_jetgamma_13=sqrt(pow(f_13*err_r_13*(N_CR1_data_13-f_13*(N_CR1_data_13+N_CR2_data_13))/pow(r_13-f_13,2),2)+pow(r_13*err_f_13*(r_13*(N_CR1_data_13+N_CR2_data_13)-N_CR1_data_13)/pow(r_13-f_13,2),2)+pow(f_13*(r_13-1)*error_CR1_data_13/(r_13-f_13),2)+pow(f_13*r_13*error_CR2_data_13/(r_13-f_13),2));
  // Double_t error_CR_jetgamma_14=sqrt(pow(f_14*err_r_14*(N_CR1_data_14-f_14*(N_CR1_data_14+N_CR2_data_14))/pow(r_14-f_14,2),2)+pow(r_14*err_f_14*(r_14*(N_CR1_data_14+N_CR2_data_14)-N_CR1_data_14)/pow(r_14-f_14,2),2)+pow(f_14*(r_14-1)*error_CR1_data_14/(r_14-f_14),2)+pow(f_14*r_14*error_CR2_data_14/(r_14-f_14),2));
  // Double_t error_CR_jetgamma_15=sqrt(pow(f_15*err_r_15*(N_CR1_data_15-f_15*(N_CR1_data_15+N_CR2_data_15))/pow(r_15-f_15,2),2)+pow(r_15*err_f_15*(r_15*(N_CR1_data_15+N_CR2_data_15)-N_CR1_data_15)/pow(r_15-f_15,2),2)+pow(f_15*(r_15-1)*error_CR1_data_15/(r_15-f_15),2)+pow(f_15*r_15*error_CR2_data_15/(r_15-f_15),2));
  //
  //
  std::cout << "slice 1 " << " N_CR_jetgamma_1=" << (f_1/(r_1-f_1))*((r_1-1)*N_CR1_data_1+r_1*N_CR2_data_1) << " +- " << error_CR_jetgamma_1 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 2 " << " N_CR_jetgamma_2=" << (f_2/(r_2-f_2))*((r_2-1)*N_CR1_data_2+r_2*N_CR2_data_2) << " +- " << error_CR_jetgamma_2 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 3 " << " N_CR_jetgamma_3=" << (f_3/(r_3-f_3))*((r_3-1)*N_CR1_data_3+r_3*N_CR2_data_3) << " +- " << error_CR_jetgamma_3 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 4 " << " N_CR_jetgamma_4=" << (f_4/(r_4-f_4))*((r_4-1)*N_CR1_data_4+r_4*N_CR2_data_4)  << " +- " << error_CR_jetgamma_4 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 5 " <<" N_CR_jetgamma_5=" << (f_5/(r_5-f_5))*((r_5-1)*N_CR1_data_5+r_5*N_CR2_data_5)  << " +- " << error_CR_jetgamma_5 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 6 " <<" N_CR_jetgamma_6=" << (f_6/(r_6-f_6))*((r_6-1)*N_CR1_data_6+r_6*N_CR2_data_6)  << " +- " << error_CR_jetgamma_6 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 7 " <<" N_CR_jetgamma_7=" << (f_7/(r_7-f_7))*((r_7-1)*N_CR1_data_7+r_7*N_CR2_data_7)  << " +- " << error_CR_jetgamma_7 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 8 " <<" N_CR_jetgamma_8=" << (f_8/(r_8-f_8))*((r_8-1)*N_CR1_data_8+r_8*N_CR2_data_8)  << " +- " << error_CR_jetgamma_8 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 9 " << " N_CR_jetgamma_9=" << (f_9/(r_9-f_9))*((r_9-1)*N_CR1_data_9+r_9*N_CR2_data_9) << " +- " << error_CR_jetgamma_9 << '\n';
  std::cout << "" << '\n';

  std::cout << "slice 10 " << " N_CR_jetgamma_10=" << (f_10/(r_10-f_10))*((r_10-1)*N_CR1_data_10+r_10*N_CR2_data_10) << " +- " << error_CR_jetgamma_10 << '\n';
  std::cout << "" << '\n';

  // std::cout << "slice 11 " << " N_CR_jetgamma_11=" << (f_11/(r_11-f_11))*((r_11-1)*N_CR1_data_11+r_11*N_CR2_data_11)  << " +- " << error_CR_jetgamma_11 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 12 " <<" N_CR_jetgamma_12=" << (f_12/(r_12-f_12))*((r_12-1)*N_CR1_data_12+r_12*N_CR2_data_12)  << " +- " << error_CR_jetgamma_12 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 13 " <<" N_CR_jetgamma_13=" << (f_13/(r_13-f_13))*((r_13-1)*N_CR1_data_13+r_13*N_CR2_data_13)  << " +- " << error_CR_jetgamma_13 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 14 " <<" N_CR_jetgamma_14=" << (f_14/(r_14-f_14))*((r_14-1)*N_CR1_data_14+r_14*N_CR2_data_14)  << " +- " << error_CR_jetgamma_14 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 15 " <<" N_CR_jetgamma_15=" << (f_15/(r_15-f_15))*((r_15-1)*N_CR1_data_15+r_15*N_CR2_data_15)  << " +- " << error_CR_jetgamma_15 << '\n';
  // std::cout << "" << '\n';


}

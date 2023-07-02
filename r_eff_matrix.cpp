void r_eff_matrix(){

  Int_t mc_ph_type;
  UInt_t n_ph, n_jet, n_e_looseBL, n_mu, ph_isem;
  Double_t weight, ph_pt, ph_phi, ph_eta, ph_iso_et20, ph_iso_pt, ph_z_point;
  Double_t jet_lead_phi,jet_lead_pt, jet_lead_eta, metTST_pt, metTST_phi, metTSTsignif, koef;
  Double_t error_CR1_sig_1, error_CR2_sig_1, error_CR1_sig_2, error_CR1_sig_3, error_CR1_sig_4, error_CR1_sig_5, error_CR1_sig_6, error_CR1_sig_7, error_CR1_sig_8, error_CR1_sig_9, error_CR1_sig_10, error_CR1_sig_11, error_CR1_sig_12, error_CR1_sig_13, error_CR1_sig_14, error_CR1_sig_15, error_CR2_sig_2, error_CR2_sig_3, error_CR2_sig_4, error_CR2_sig_5, error_CR2_sig_6, error_CR2_sig_7, error_CR2_sig_8, error_CR2_sig_9, error_CR2_sig_10, error_CR2_sig_11, error_CR2_sig_12, error_CR2_sig_13, error_CR2_sig_14, error_CR2_sig_15;
  Double_t N_CR1_sig_1, N_CR2_sig_1, N_CR1_sig_2, N_CR1_sig_3, N_CR1_sig_4, N_CR1_sig_5, N_CR1_sig_6, N_CR1_sig_7, N_CR1_sig_8, N_CR1_sig_9, N_CR1_sig_10, N_CR1_sig_11, N_CR1_sig_12, N_CR1_sig_13, N_CR1_sig_14, N_CR1_sig_15, N_CR2_sig_2, N_CR2_sig_3, N_CR2_sig_4, N_CR2_sig_5, N_CR2_sig_6, N_CR2_sig_7, N_CR2_sig_8, N_CR2_sig_9, N_CR2_sig_10, N_CR2_sig_11, N_CR2_sig_12, N_CR2_sig_13, N_CR2_sig_14, N_CR2_sig_15;
  Double_t L_a = 36214.96, L_d = 44307.4, L_e = 58450.1, L_j;
  Int_t nbins=1;
//  Double_t xbins[6] = {0, 0.6, 1.3, 1.9, 2.5, 3.15};
//  Double_t xbins[4] = {0, 5.2, 8, 15};
//  Double_t slice_1=0.065, slice_2=0.085, slice_3=0.105, slice_4=0.125, slice_5=0.145, slice_6=0.165, slice_7=0.185, slice_8=0.205, slice_cut=0.225;
//  Double_t slice_1=0.065, slice_2=0.09, slice_3=0.115, slice_4=0.14, slice_5=0.165;

  //Double_t slice_1=0.065, slice_2=0.075, slice_3=0.085, slice_4=0.095, slice_5=0.105, slice_6=0.115, slice_7=0.125, slice_8=0.135, slice_9=0.145, slice_10=0.155, slice_11=0.165, slice_12=0.175, slice_13=0.185, slice_14=0.195, slice_15=0.205, slice_cut=0.215;
  Double_t slice_1=0.065, slice_2=0.08, slice_3=0.095, slice_4=0.11, slice_5=0.125, slice_6=0.14, slice_7=0.155, slice_8=0.17, slice_9=0.185, slice_10=0.2, slice_11=0.215;
//   Double_t slice_1=0.024, slice_2=0.034, slice_3=0.044, slice_4=0.054, slice_5=0.065, slice_6=0.075;

  TH1D *hist_CR1_sig_1 = new TH1D ("hist_CR1_sig_1", "hist_CR1_sig_1", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_2 = new TH1D ("hist_CR1_sig_2", "hist_CR1_sig_2", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_3 = new TH1D ("hist_CR1_sig_3", "hist_CR1_sig_3", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_4 = new TH1D ("hist_CR1_sig_4", "hist_CR1_sig_4", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_5 = new TH1D ("hist_CR1_sig_5", "hist_CR1_sig_5", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_6 = new TH1D ("hist_CR1_sig_6", "hist_CR1_sig_6", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_7 = new TH1D ("hist_CR1_sig_7", "hist_CR1_sig_7", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_8 = new TH1D ("hist_CR1_sig_8", "hist_CR1_sig_8", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_9 = new TH1D ("hist_CR1_sig_9", "hist_CR1_sig_9", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_10 = new TH1D ("hist_CR1_sig_10", "hist_CR1_sig_10", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_11 = new TH1D ("hist_CR1_sig_11", "hist_CR1_sig_11", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_12 = new TH1D ("hist_CR1_sig_12", "hist_CR1_sig_12", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_13 = new TH1D ("hist_CR1_sig_13", "hist_CR1_sig_13", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_14 = new TH1D ("hist_CR1_sig_14", "hist_CR1_sig_14", nbins, 0.5, 1.5);
  TH1D *hist_CR1_sig_15 = new TH1D ("hist_CR1_sig_15", "hist_CR1_sig_15", nbins, 0.5, 1.5);


  TH1D *hist_CR2_sig_1 = new TH1D ("hist_CR2_sig_1", "hist_CR2_sig_1", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_2 = new TH1D ("hist_CR2_sig_2", "hist_CR2_sig_2", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_3 = new TH1D ("hist_CR2_sig_3", "hist_CR2_sig_3", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_4 = new TH1D ("hist_CR2_sig_4", "hist_CR2_sig_4", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_5 = new TH1D ("hist_CR2_sig_5", "hist_CR2_sig_5", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_6 = new TH1D ("hist_CR2_sig_6", "hist_CR2_sig_6", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_7 = new TH1D ("hist_CR2_sig_7", "hist_CR2_sig_7", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_8 = new TH1D ("hist_CR2_sig_8", "hist_CR2_sig_8", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_9 = new TH1D ("hist_CR2_sig_9", "hist_CR2_sig_9", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_10 = new TH1D ("hist_CR2_sig_10", "hist_CR2_sig_10", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_11 = new TH1D ("hist_CR2_sig_11", "hist_CR2_sig_11", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_12 = new TH1D ("hist_CR2_sig_12", "hist_CR2_sig_12", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_13 = new TH1D ("hist_CR2_sig_13", "hist_CR2_sig_13", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_14 = new TH1D ("hist_CR2_sig_14", "hist_CR2_sig_14", nbins, 0.5, 1.5);
  TH1D *hist_CR2_sig_15 = new TH1D ("hist_CR2_sig_15", "hist_CR2_sig_15", nbins, 0.5, 1.5);

  // hist_FR_sig_1 = dynamic_cast<TH1D*>(hist_FR_sig_1->Rebin(nbins,"hist1",xbins));
  // hist_FR_sig_2 = dynamic_cast<TH1D*>(hist_FR_sig_2->Rebin(nbins,"hist2",xbins));
  // hist_FR_sig_3 = dynamic_cast<TH1D*>(hist_FR_sig_3->Rebin(nbins,"hist3",xbins));
  // hist_FR_sig_4 = dynamic_cast<TH1D*>(hist_FR_sig_4->Rebin(nbins,"hist4",xbins));
  // hist_FR_sig_5 = dynamic_cast<TH1D*>(hist_FR_sig_5->Rebin(nbins,"hist5",xbins));
  //
  // hist_CR1_sig_1 = dynamic_cast<TH1D*>(hist_CR1_sig_1->Rebin(nbins,"hist1",xbins));
  // hist_CR1_sig_2 = dynamic_cast<TH1D*>(hist_CR1_sig_2->Rebin(nbins,"hist2",xbins));
  // hist_CR1_sig_3 = dynamic_cast<TH1D*>(hist_CR1_sig_3->Rebin(nbins,"hist3",xbins));
  // hist_CR1_sig_4 = dynamic_cast<TH1D*>(hist_CR1_sig_4->Rebin(nbins,"hist4",xbins));
  // hist_CR1_sig_5 = dynamic_cast<TH1D*>(hist_CR1_sig_5->Rebin(nbins,"hist5",xbins));
  //
  // hist_CR2_sig_1 = dynamic_cast<TH1D*>(hist_CR2_sig_1->Rebin(nbins,"hist1",xbins));
  // hist_CR2_sig_2 = dynamic_cast<TH1D*>(hist_CR2_sig_2->Rebin(nbins,"hist2",xbins));
  // hist_CR2_sig_3 = dynamic_cast<TH1D*>(hist_CR2_sig_3->Rebin(nbins,"hist3",xbins));
  // hist_CR2_sig_4 = dynamic_cast<TH1D*>(hist_CR2_sig_4->Rebin(nbins,"hist4",xbins));
  // hist_CR2_sig_5 = dynamic_cast<TH1D*>(hist_CR2_sig_5->Rebin(nbins,"hist5",xbins));

    const char *path = "/home/valerian/programs/R_factor_MC/private/";
    const char *nabor[] = {"nabor_361290","QCD_345784"};

    for (int l = 0; l <= 1; l++) {
    char *Nabor = new char[strlen(path) + strlen(nabor[l]) + 1];
    strcpy(Nabor, path);
    strcat(Nabor, nabor[l]);

    const char *year[] = {"/user.akurova.a.MxAOD.root","/user.akurova.d.MxAOD.root","/user.akurova.e.MxAOD.root"};
   //  int n = sizeof(year)/sizeof(year[0]);
      for (int j = 0; j <= 2; j++) {
      char *sig= new char[strlen(Nabor) + strlen(year[j]) + 1];
      strcpy(sig,Nabor);
      strcat(sig,year[j]);

      TFile *sig_MC = new TFile(sig, "READ");
      TTree *tree = (TTree*)sig_MC->Get("output_tree");
      TTree *tree_koef= (TTree*)sig_MC->Get("norm_tree");
      TTree *tree_sum_w = (TTree*)sig_MC->Get("output_tree_sw");

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
      if (fabs(weight) >= 100) continue;
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

      if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_1->Fill(n_ph, weight*norm_koef); //неизолированная область с жестким фотоном
      if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_2->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_3->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_4->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_5->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_6 && Iso_cal < slice_7 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_6->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_7 && Iso_cal < slice_8 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_7->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_8 && Iso_cal < slice_9 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_8->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_9 && Iso_cal < slice_10 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_9->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_10 && Iso_cal < slice_11 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_10->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_11 && Iso_cal < slice_12 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_11->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_12 && Iso_cal < slice_13 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_12->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_13 && Iso_cal < slice_14 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_13->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_14 && Iso_cal < slice_15 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_14->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_15 && Iso_cal < slice_cut && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_15->Fill(n_ph, weight*norm_koef);

      if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05) hist_CR2_sig_1->Fill(n_ph, weight*norm_koef);   //неизолированная область с мягким фотоном
      if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05) hist_CR2_sig_2->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05) hist_CR2_sig_3->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05) hist_CR2_sig_4->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05) hist_CR2_sig_5->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_6 && Iso_cal < slice_7 && Iso_track > 0.05) hist_CR2_sig_6->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_7 && Iso_cal < slice_8 && Iso_track > 0.05) hist_CR2_sig_7->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_8 && Iso_cal < slice_9 && Iso_track > 0.05) hist_CR2_sig_8->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_9 && Iso_cal < slice_10 && Iso_track > 0.05) hist_CR2_sig_9->Fill(n_ph, weight*norm_koef);
      if (Iso_cal > slice_10 && Iso_cal < slice_11 && Iso_track > 0.05) hist_CR2_sig_10->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_11 && Iso_cal < slice_12 && Iso_track > 0.05) hist_CR2_sig_11->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_12 && Iso_cal < slice_13 && Iso_track > 0.05) hist_CR2_sig_12->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_13 && Iso_cal < slice_14 && Iso_track > 0.05) hist_CR2_sig_13->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_14 && Iso_cal < slice_15 && Iso_track > 0.05) hist_CR2_sig_14->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_15 && Iso_cal < slice_cut && Iso_track > 0.05) hist_CR2_sig_15->Fill(n_ph, weight*norm_koef);

      // if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_1->Fill(n_ph, weight*norm_koef); // Для СО неизолированная область с жестким фотоном
      // if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_2->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_3->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_4->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05 && ph_isem == 0) hist_CR1_sig_5->Fill(n_ph, weight*norm_koef);
      //
      // if (Iso_cal > slice_1 && Iso_cal < slice_2 && Iso_track > 0.05) hist_CR2_sig_1->Fill(n_ph, weight*norm_koef);   //неизолированная область с мягким фотоном
      // if (Iso_cal > slice_2 && Iso_cal < slice_3 && Iso_track > 0.05) hist_CR2_sig_2->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_3 && Iso_cal < slice_4 && Iso_track > 0.05) hist_CR2_sig_3->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_4 && Iso_cal < slice_5 && Iso_track > 0.05) hist_CR2_sig_4->Fill(n_ph, weight*norm_koef);
      // if (Iso_cal > slice_5 && Iso_cal < slice_6 && Iso_track > 0.05) hist_CR2_sig_5->Fill(n_ph, weight*norm_koef);
        }
      }
    }

    // Double_t overflow_CR1_5 = hist_CR1_sig_5->GetBinContent(nbins)+hist_CR1_sig_5->GetBinContent(nbins+1);
    // Double_t overflow_CR2_5 = hist_CR2_sig_5->GetBinContent(nbins)+hist_CR2_sig_5->GetBinContent(nbins+1);

    // Double_t overflow_FR_3 = hist_FR_sig_3->GetBinContent(nbins)+hist_FR_sig_3->GetBinContent(nbins+1);
    // Double_t overflow_FR_4 = hist_FR_sig_4->GetBinContent(nbins)+hist_FR_sig_4->GetBinContent(nbins+1);
    // Double_t overflow_FR_5 = hist_FR_sig_5->GetBinContent(nbins)+hist_FR_sig_5->GetBinContent(nbins+1);
    //
    // Double_t overflow_CR1_1 = hist_CR1_sig_1->GetBinContent(nbins)+hist_CR1_sig_1->GetBinContent(nbins+1);
    // Double_t overflow_CR1_2 = hist_CR1_sig_2->GetBinContent(nbins)+hist_CR1_sig_2->GetBinContent(nbins+1);
    // Double_t overflow_CR1_3 = hist_CR1_sig_3->GetBinContent(nbins)+hist_CR1_sig_3->GetBinContent(nbins+1);
    // Double_t overflow_CR1_4 = hist_CR1_sig_4->GetBinContent(nbins)+hist_CR1_sig_4->GetBinContent(nbins+1);
    // Double_t overflow_CR1_5 = hist_CR1_sig_5->GetBinContent(nbins)+hist_CR1_sig_5->GetBinContent(nbins+1);
    //
    // Double_t overflow_CR2_1= hist_CR2_sig_1->GetBinContent(nbins)+hist_CR2_sig_1->GetBinContent(nbins+1);
    // Double_t overflow_CR2_2= hist_CR2_sig_2->GetBinContent(nbins)+hist_CR2_sig_2->GetBinContent(nbins+1);
    // Double_t overflow_CR2_3= hist_CR2_sig_3->GetBinContent(nbins)+hist_CR2_sig_3->GetBinContent(nbins+1);
    // Double_t overflow_CR2_4= hist_CR2_sig_4->GetBinContent(nbins)+hist_CR2_sig_4->GetBinContent(nbins+1);
    // Double_t overflow_CR2_5= hist_CR2_sig_5->GetBinContent(nbins)+hist_CR2_sig_5->GetBinContent(nbins+1);
    //
    // hist_CR1_sig_5->SetBinContent(nbins, overflow_CR1_5);
    // hist_CR2_sig_5->SetBinContent(nbins, overflow_CR2_5);
    // hist_FR_sig_3->SetBinContent(nbins, overflow_FR_3);
    // hist_FR_sig_4->SetBinContent(nbins, overflow_FR_4);
    // hist_FR_sig_5->SetBinContent(nbins, overflow_FR_5);
    //
    // hist_CR1_sig_1->SetBinContent(nbins, overflow_CR1_1);
    // hist_CR1_sig_2->SetBinContent(nbins, overflow_CR1_2);
    // hist_CR1_sig_3->SetBinContent(nbins, overflow_CR1_3);
    // hist_CR1_sig_4->SetBinContent(nbins, overflow_CR1_4);
    // hist_CR1_sig_5->SetBinContent(nbins, overflow_CR1_5);
    //
    // hist_CR2_sig_1->SetBinContent(nbins, overflow_CR2_1);
    // hist_CR2_sig_2->SetBinContent(nbins, overflow_CR2_2);
    // hist_CR2_sig_3->SetBinContent(nbins, overflow_CR2_3);
    // hist_CR2_sig_4->SetBinContent(nbins, overflow_CR2_4);
    // hist_CR2_sig_5->SetBinContent(nbins, overflow_CR2_5);
    //
    // Double_t overflow_err_CR1_5 = sqrt(pow(hist_CR1_sig_5->GetBinError(nbins), 2) + pow(hist_CR1_sig_5->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR2_5 = sqrt(pow(hist_CR2_sig_5->GetBinError(nbins), 2) + pow(hist_CR2_sig_5->GetBinError(nbins+1), 2));
    // Double_t overflow_err_FR_3 = sqrt(pow(hist_FR_sig_3->GetBinError(nbins), 2) + pow(hist_FR_sig_3->GetBinError(nbins+1), 2));
    // Double_t overflow_err_FR_4 = sqrt(pow(hist_FR_sig_4->GetBinError(nbins), 2) + pow(hist_FR_sig_4->GetBinError(nbins+1), 2));
    // Double_t overflow_err_FR_5 = sqrt(pow(hist_FR_sig_5->GetBinError(nbins), 2) + pow(hist_FR_sig_5->GetBinError(nbins+1), 2));
    //
    // Double_t overflow_err_CR1_1 = sqrt(pow(hist_CR1_sig_1->GetBinError(nbins), 2) + pow(hist_CR1_sig_1->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR1_2 = sqrt(pow(hist_CR1_sig_2->GetBinError(nbins), 2) + pow(hist_CR1_sig_2->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR1_3 = sqrt(pow(hist_CR1_sig_3->GetBinError(nbins), 2) + pow(hist_CR1_sig_3->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR1_4 = sqrt(pow(hist_CR1_sig_4->GetBinError(nbins), 2) + pow(hist_CR1_sig_4->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR1_5 = sqrt(pow(hist_CR1_sig_5->GetBinError(nbins), 2) + pow(hist_CR1_sig_5->GetBinError(nbins+1), 2));
    //
    // Double_t overflow_err_CR2_1 = sqrt(pow(hist_CR2_sig_1->GetBinError(nbins), 2) + pow(hist_CR2_sig_1->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR2_2 = sqrt(pow(hist_CR2_sig_2->GetBinError(nbins), 2) + pow(hist_CR2_sig_2->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR2_3 = sqrt(pow(hist_CR2_sig_3->GetBinError(nbins), 2) + pow(hist_CR2_sig_3->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR2_4 = sqrt(pow(hist_CR2_sig_4->GetBinError(nbins), 2) + pow(hist_CR2_sig_4->GetBinError(nbins+1), 2));
    // Double_t overflow_err_CR2_5 = sqrt(pow(hist_CR2_sig_5->GetBinError(nbins), 2) + pow(hist_CR2_sig_5->GetBinError(nbins+1), 2));
    //
    // hist_CR1_sig_5->SetBinError(nbins, overflow_err_CR1_5);
    // hist_CR2_sig_5->SetBinError(nbins, overflow_err_CR2_5);
    // hist_FR_sig_3->SetBinError(nbins, overflow_err_FR_3);
    // hist_FR_sig_4->SetBinError(nbins, overflow_err_FR_4);
    // hist_FR_sig_5->SetBinError(nbins, overflow_err_FR_5);
    //
    // hist_CR1_sig_1->SetBinError(nbins, overflow_err_CR1_1);
    // hist_CR1_sig_2->SetBinError(nbins, overflow_err_CR1_2);
    // hist_CR1_sig_3->SetBinError(nbins, overflow_err_CR1_3);
    // hist_CR1_sig_4->SetBinError(nbins, overflow_err_CR1_4);
    // hist_CR1_sig_5->SetBinError(nbins, overflow_err_CR1_5);
    //
    // hist_CR2_sig_1->SetBinError(nbins, overflow_err_CR2_1);
    // hist_CR2_sig_2->SetBinError(nbins, overflow_err_CR2_2);
    // hist_CR2_sig_3->SetBinError(nbins, overflow_err_CR2_3);
    // hist_CR2_sig_4->SetBinError(nbins, overflow_err_CR2_4);
    // hist_CR2_sig_5->SetBinError(nbins, overflow_err_CR2_5);

    TFile *file_CR1 = new TFile ("CR1_sig_MM.root","RECREATE");
    hist_CR1_sig_1->Write();
    hist_CR1_sig_2->Write();
    hist_CR1_sig_3->Write();
    hist_CR1_sig_4->Write();
    hist_CR1_sig_5->Write();
    hist_CR1_sig_6->Write();
    hist_CR1_sig_7->Write();
    hist_CR1_sig_8->Write();
    hist_CR1_sig_9->Write();
    hist_CR1_sig_10->Write();
    // hist_CR1_sig_11->Write();
    // hist_CR1_sig_12->Write();
    // hist_CR1_sig_13->Write();
    // hist_CR1_sig_14->Write();
    // hist_CR1_sig_15->Write();
    file_CR1->Close();

    TFile *file_CR2 = new TFile ("CR2_sig_MM.root","RECREATE");
    hist_CR2_sig_1->Write();
    hist_CR2_sig_2->Write();
    hist_CR2_sig_3->Write();
    hist_CR2_sig_4->Write();
    hist_CR2_sig_5->Write();
    hist_CR2_sig_6->Write();
    hist_CR2_sig_7->Write();
    hist_CR2_sig_8->Write();
    hist_CR2_sig_9->Write();
    hist_CR2_sig_10->Write();
    // hist_CR2_sig_11->Write();
    // hist_CR2_sig_12->Write();
    // hist_CR2_sig_13->Write();
    // hist_CR2_sig_14->Write();
    // hist_CR2_sig_15->Write();
    file_CR2->Close();


    N_CR1_sig_1=hist_CR1_sig_1->IntegralAndError(1, nbins, error_CR1_sig_1, "");
    N_CR1_sig_2=hist_CR1_sig_2->IntegralAndError(1, nbins, error_CR1_sig_2, "");
    N_CR1_sig_3=hist_CR1_sig_3->IntegralAndError(1, nbins, error_CR1_sig_3, "");
    N_CR1_sig_4=hist_CR1_sig_4->IntegralAndError(1, nbins, error_CR1_sig_4, "");
    N_CR1_sig_5=hist_CR1_sig_5->IntegralAndError(1, nbins, error_CR1_sig_5, "");
    N_CR1_sig_6=hist_CR1_sig_6->IntegralAndError(1, nbins, error_CR1_sig_6, "");
    N_CR1_sig_7=hist_CR1_sig_7->IntegralAndError(1, nbins, error_CR1_sig_7, "");
    N_CR1_sig_8=hist_CR1_sig_8->IntegralAndError(1, nbins, error_CR1_sig_8, "");
    N_CR1_sig_9=hist_CR1_sig_9->IntegralAndError(1, nbins, error_CR1_sig_9, "");
    N_CR1_sig_10=hist_CR1_sig_10->IntegralAndError(1, nbins, error_CR1_sig_10, "");
    // N_CR1_sig_11=hist_CR1_sig_11->IntegralAndError(1, nbins, error_CR1_sig_11, "");
    // N_CR1_sig_12=hist_CR1_sig_12->IntegralAndError(1, nbins, error_CR1_sig_12, "");
    // N_CR1_sig_13=hist_CR1_sig_13->IntegralAndError(1, nbins, error_CR1_sig_13, "");
    // N_CR1_sig_14=hist_CR1_sig_14->IntegralAndError(1, nbins, error_CR1_sig_14, "");
    // N_CR1_sig_15=hist_CR1_sig_15->IntegralAndError(1, nbins, error_CR1_sig_15, "");


    N_CR2_sig_1=hist_CR2_sig_1->IntegralAndError(1, nbins, error_CR2_sig_1, "");
    N_CR2_sig_2=hist_CR2_sig_2->IntegralAndError(1, nbins, error_CR2_sig_2, "");
    N_CR2_sig_3=hist_CR2_sig_3->IntegralAndError(1, nbins, error_CR2_sig_3, "");
    N_CR2_sig_4=hist_CR2_sig_4->IntegralAndError(1, nbins, error_CR2_sig_4, "");
    N_CR2_sig_5=hist_CR2_sig_5->IntegralAndError(1, nbins, error_CR2_sig_5, "");
    N_CR2_sig_6=hist_CR2_sig_6->IntegralAndError(1, nbins, error_CR2_sig_6, "");
    N_CR2_sig_7=hist_CR2_sig_7->IntegralAndError(1, nbins, error_CR2_sig_7, "");
    N_CR2_sig_8=hist_CR2_sig_8->IntegralAndError(1, nbins, error_CR2_sig_8, "");
    N_CR2_sig_9=hist_CR2_sig_9->IntegralAndError(1, nbins, error_CR2_sig_9, "");
    N_CR2_sig_10=hist_CR2_sig_10->IntegralAndError(1, nbins, error_CR2_sig_10, "");
    // N_CR2_sig_11=hist_CR2_sig_11->IntegralAndError(1, nbins, error_CR2_sig_11, "");
    // N_CR2_sig_12=hist_CR2_sig_12->IntegralAndError(1, nbins, error_CR2_sig_12, "");
    // N_CR2_sig_13=hist_CR2_sig_13->IntegralAndError(1, nbins, error_CR2_sig_13, "");
    // N_CR2_sig_14=hist_CR2_sig_14->IntegralAndError(1, nbins, error_CR2_sig_14, "");
    // N_CR2_sig_15=hist_CR2_sig_15->IntegralAndError(1, nbins, error_CR2_sig_15, "");


    Double_t error_r_1 =sqrt(pow(error_CR1_sig_1/N_CR2_sig_1,2)+pow(N_CR1_sig_1*error_CR2_sig_1/pow(N_CR2_sig_1,2),2));
    Double_t error_r_2 =sqrt(pow(error_CR1_sig_2/N_CR2_sig_2,2)+pow(N_CR1_sig_2*error_CR2_sig_2/pow(N_CR2_sig_2,2),2));
    Double_t error_r_3 =sqrt(pow(error_CR1_sig_3/N_CR2_sig_3,2)+pow(N_CR1_sig_3*error_CR2_sig_3/pow(N_CR2_sig_3,2),2));
    Double_t error_r_4 =sqrt(pow(error_CR1_sig_4/N_CR2_sig_4,2)+pow(N_CR1_sig_4*error_CR2_sig_4/pow(N_CR2_sig_4,2),2));
    Double_t error_r_5 =sqrt(pow(error_CR1_sig_5/N_CR2_sig_5,2)+pow(N_CR1_sig_5*error_CR2_sig_5/pow(N_CR2_sig_5,2),2));
    Double_t error_r_6 =sqrt(pow(error_CR1_sig_6/N_CR2_sig_6,2)+pow(N_CR1_sig_6*error_CR2_sig_6/pow(N_CR2_sig_6,2),2));
    Double_t error_r_7 =sqrt(pow(error_CR1_sig_7/N_CR2_sig_7,2)+pow(N_CR1_sig_7*error_CR2_sig_7/pow(N_CR2_sig_7,2),2));
    Double_t error_r_8 =sqrt(pow(error_CR1_sig_8/N_CR2_sig_8,2)+pow(N_CR1_sig_8*error_CR2_sig_8/pow(N_CR2_sig_8,2),2));
    Double_t error_r_9 =sqrt(pow(error_CR1_sig_9/N_CR2_sig_9,2)+pow(N_CR1_sig_9*error_CR2_sig_9/pow(N_CR2_sig_9,2),2));
    Double_t error_r_10 =sqrt(pow(error_CR1_sig_10/N_CR2_sig_10,2)+pow(N_CR1_sig_10*error_CR2_sig_10/pow(N_CR2_sig_10,2),2));
    // Double_t error_r_11 =sqrt(pow(error_CR1_sig_11/N_CR2_sig_11,2)+pow(N_CR1_sig_11*error_CR2_sig_11/pow(N_CR2_sig_11,2),2));
    // Double_t error_r_12 =sqrt(pow(error_CR1_sig_12/N_CR2_sig_12,2)+pow(N_CR1_sig_12*error_CR2_sig_12/pow(N_CR2_sig_12,2),2));
    // Double_t error_r_13 =sqrt(pow(error_CR1_sig_13/N_CR2_sig_13,2)+pow(N_CR1_sig_13*error_CR2_sig_13/pow(N_CR2_sig_13,2),2));
    // Double_t error_r_14 =sqrt(pow(error_CR1_sig_14/N_CR2_sig_14,2)+pow(N_CR1_sig_14*error_CR2_sig_14/pow(N_CR2_sig_14,2),2));
    // Double_t error_r_15 =sqrt(pow(error_CR1_sig_15/N_CR2_sig_15,2)+pow(N_CR1_sig_15*error_CR2_sig_15/pow(N_CR2_sig_15,2),2));



    std::cout << "slice 1 " << " r_1= " << N_CR1_sig_1/N_CR2_sig_1 << " +- " << error_r_1 << "    N_CR1_sig_1=" << N_CR1_sig_1 << " +- " << error_CR1_sig_1 << "    N_CR2_sig_1=" << N_CR2_sig_1 << " +- " << error_CR2_sig_1 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 2 " << " r_2= " << N_CR1_sig_2/N_CR2_sig_2 << " +- " << error_r_2 << "    N_CR1_sig_2=" << N_CR1_sig_2 << " +- " << error_CR1_sig_2 << "    N_CR2_sig_2=" << N_CR2_sig_2 << " +- " << error_CR2_sig_2 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 3 " << " r_3= " << N_CR1_sig_3/N_CR2_sig_3 << " +- " << error_r_3 << "    N_CR1_sig_3=" << N_CR1_sig_3 << " +- " << error_CR1_sig_3 << "    N_CR2_sig_3_sig=" << N_CR2_sig_3<< " +- " << error_CR2_sig_3 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 4 " << " r_4= " << N_CR1_sig_4/N_CR2_sig_4 << " +- " << error_r_4 << "    N_CR1_sig_4=" << N_CR1_sig_4 << " +- " << error_CR1_sig_4 << "    N_CR2_sig_4=" << N_CR2_sig_4 << " +- " << error_CR2_sig_4 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 5 " <<" r_5= " << N_CR1_sig_5/N_CR2_sig_5 << " +- " << error_r_5 << "    N_CR1_sig_5=" << N_CR1_sig_5 << " +- " << error_CR1_sig_5 << "    N_CR2_sig_5=" << N_CR2_sig_5 << " +- " << error_CR2_sig_5 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 6 " <<" r_6= " << N_CR1_sig_6/N_CR2_sig_6 << " +- " << error_r_6 << "    N_CR1_sig_6=" << N_CR1_sig_6 << " +- " << error_CR1_sig_6 << "    N_CR2_sig_6=" << N_CR2_sig_6 << " +- " << error_CR2_sig_6 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 7 " <<" r_7= " << N_CR1_sig_7/N_CR2_sig_7 << " +- " << error_r_7 << "    N_CR1_sig_7=" << N_CR1_sig_7 << " +- " << error_CR1_sig_7 << "    N_CR2_sig_7=" << N_CR2_sig_7 << " +- " << error_CR2_sig_7 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 8 " <<" r_8= " << N_CR1_sig_8/N_CR2_sig_8 << " +- " << error_r_8 << "    N_CR1_sig_8=" << N_CR1_sig_8 << " +- " << error_CR1_sig_8 << "    N_CR2_sig_8=" << N_CR2_sig_8 << " +- " << error_CR2_sig_8 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 9 " <<" r_9= " << N_CR1_sig_9/N_CR2_sig_9 << " +- " << error_r_9 << "    N_CR1_sig_9=" << N_CR1_sig_9 << " +- " << error_CR1_sig_9 << "    N_CR2_sig_9=" << N_CR2_sig_9 << " +- " << error_CR2_sig_9 << '\n';
    std::cout << "" << '\n';

    std::cout << "slice 10 " <<" r_10= " << N_CR1_sig_10/N_CR2_sig_10 << " +- " << error_r_10 << "    N_CR1_sig_10=" << N_CR1_sig_10 << " +- " << error_CR1_sig_10 << "    N_CR2_sig_10=" << N_CR2_sig_10 << " +- " << error_CR2_sig_10 << '\n';
    std::cout << "" << '\n';
    //
    // std::cout << "slice 11 " <<" r_11= " << N_CR1_sig_11/N_CR2_sig_11 << " +- " << error_r_11 << "    N_CR1_sig_11=" << N_CR1_sig_11 << " +- " << error_CR1_sig_11 << "    N_CR2_sig_11=" << N_CR2_sig_11 << " +- " << error_CR2_sig_11 << '\n';
    // std::cout << "" << '\n';
    //
    // std::cout << "slice 12 " <<" r_12= " << N_CR1_sig_12/N_CR2_sig_12 << " +- " << error_r_12 << "    N_CR1_sig_12=" << N_CR1_sig_12 << " +- " << error_CR1_sig_12 << "    N_CR2_sig_12=" << N_CR2_sig_12 << " +- " << error_CR2_sig_12 << '\n';
    // std::cout << "" << '\n';
    //
    // std::cout << "slice 13 " <<" r_13= " << N_CR1_sig_13/N_CR2_sig_13 << " +- " << error_r_13 << "    N_CR1_sig_13=" << N_CR1_sig_13 << " +- " << error_CR1_sig_13 << "    N_CR2_sig_13=" << N_CR2_sig_13 << " +- " << error_CR2_sig_13 << '\n';
    // std::cout << "" << '\n';
    //
    // std::cout << "slice 14 " <<" r_14= " << N_CR1_sig_14/N_CR2_sig_14 << " +- " << error_r_14 << "    N_CR1_sig_14=" << N_CR1_sig_14 << " +- " << error_CR1_sig_14 << "    N_CR2_sig_14=" << N_CR2_sig_14 << " +- " << error_CR2_sig_14 << '\n';
    // std::cout << "" << '\n';
    //
    // std::cout << "slice 15 " <<" r_15= " << N_CR1_sig_15/N_CR2_sig_15 << " +- " << error_r_15 << "    N_CR1_sig_15=" << N_CR1_sig_15 << " +- " << error_CR1_sig_15 << "    N_CR2_sig_15=" << N_CR2_sig_15 << " +- " << error_CR2_sig_15 << '\n';
    // std::cout << "" << '\n';
}

void matrix_jet_gamma(){
  Double_t error_CR1_bac_1, error_CR1_bac_2, error_CR1_bac_3, error_CR1_bac_4, error_CR1_bac_5, error_CR1_bac_6, error_CR1_bac_7, error_CR1_bac_8, error_CR1_bac_9, error_CR1_bac_10, error_CR1_bac_11, error_CR1_bac_12, error_CR1_bac_13, error_CR1_bac_14, error_CR1_bac_15;
  Double_t N_CR1_bac_1, N_CR1_bac_2, N_CR1_bac_3, N_CR1_bac_4, N_CR1_bac_5, N_CR1_bac_6, N_CR1_bac_7, N_CR1_bac_8, N_CR1_bac_9, N_CR1_bac_10, N_CR1_bac_11, N_CR1_bac_12, N_CR1_bac_13, N_CR1_bac_14, N_CR1_bac_15;
  Double_t error_CR2_bac_1, error_CR2_bac_2, error_CR2_bac_3, error_CR2_bac_4, error_CR2_bac_5, error_CR2_bac_6, error_CR2_bac_7, error_CR2_bac_8, error_CR2_bac_9, error_CR2_bac_10, error_CR2_bac_11, error_CR2_bac_12, error_CR2_bac_13, error_CR2_bac_14, error_CR2_bac_15;
  Double_t N_CR2_bac_1, N_CR2_bac_2, N_CR2_bac_3, N_CR2_bac_4, N_CR2_bac_5, N_CR2_bac_6, N_CR2_bac_7, N_CR2_bac_8, N_CR2_bac_9, N_CR2_bac_10, N_CR2_bac_11, N_CR2_bac_12, N_CR2_bac_13, N_CR2_bac_14, N_CR2_bac_15;
  Double_t error_CR1_data_1, error_CR1_data_2, error_CR1_data_3, error_CR1_data_4, error_CR1_data_5, error_CR1_data_6, error_CR1_data_7, error_CR1_data_8, error_CR1_data_9, error_CR1_data_10, error_CR1_data_11, error_CR1_data_12, error_CR1_data_13, error_CR1_data_14, error_CR1_data_15;
  Double_t N_CR1_data_1, N_CR1_data_2, N_CR1_data_3, N_CR1_data_4, N_CR1_data_5, N_CR1_data_6, N_CR1_data_7, N_CR1_data_8, N_CR1_data_9, N_CR1_data_10, N_CR1_data_11, N_CR1_data_12, N_CR1_data_13, N_CR1_data_14, N_CR1_data_15;
  Double_t error_CR2_data_1, error_CR2_data_2, error_CR2_data_3, error_CR2_data_4, error_CR2_data_5, error_CR2_data_6, error_CR2_data_7, error_CR2_data_8, error_CR2_data_9, error_CR2_data_10, error_CR2_data_11, error_CR2_data_12, error_CR2_data_13, error_CR2_data_14, error_CR2_data_15;
  Double_t N_CR2_data_1, N_CR2_data_2, N_CR2_data_3, N_CR2_data_4, N_CR2_data_5, N_CR2_data_6, N_CR2_data_7, N_CR2_data_8, N_CR2_data_9, N_CR2_data_10, N_CR2_data_11, N_CR2_data_12, N_CR2_data_13, N_CR2_data_14, N_CR2_data_15;
  Double_t error_CR1_sig_1, error_CR1_sig_2, error_CR1_sig_3, error_CR1_sig_4, error_CR1_sig_5, error_CR1_sig_6, error_CR1_sig_7, error_CR1_sig_8, error_CR1_sig_9, error_CR1_sig_10, error_CR1_sig_11, error_CR1_sig_12, error_CR1_sig_13, error_CR1_sig_14, error_CR1_sig_15;
  Double_t N_CR1_sig_1, N_CR1_sig_2, N_CR1_sig_3, N_CR1_sig_4, N_CR1_sig_5, N_CR1_sig_6, N_CR1_sig_7, N_CR1_sig_8, N_CR1_sig_9, N_CR1_sig_10, N_CR1_sig_11, N_CR1_sig_12, N_CR1_sig_13, N_CR1_sig_14, N_CR1_sig_15;
  Double_t error_CR2_sig_1, error_CR2_sig_2, error_CR2_sig_3, error_CR2_sig_4, error_CR2_sig_5, error_CR2_sig_6, error_CR2_sig_7, error_CR2_sig_8, error_CR2_sig_9, error_CR2_sig_10, error_CR2_sig_11, error_CR2_sig_12, error_CR2_sig_13, error_CR2_sig_14, error_CR2_sig_15;
  Double_t N_CR2_sig_1, N_CR2_sig_2, N_CR2_sig_3, N_CR2_sig_4, N_CR2_sig_5, N_CR2_sig_6, N_CR2_sig_7, N_CR2_sig_8, N_CR2_sig_9, N_CR2_sig_10, N_CR2_sig_11, N_CR2_sig_12, N_CR2_sig_13, N_CR2_sig_14, N_CR2_sig_15;

  Double_t N_CR2_jetgamma_1, N_CR2_jetgamma_2, N_CR2_jetgamma_3, N_CR2_jetgamma_4, N_CR2_jetgamma_5, N_CR2_jetgamma_6, N_CR2_jetgamma_7, N_CR2_jetgamma_8, N_CR2_jetgamma_9, N_CR2_jetgamma_10, N_CR2_jetgamma_11, N_CR2_jetgamma_12, N_CR2_jetgamma_13, N_CR2_jetgamma_14, N_CR2_jetgamma_15;
  Double_t N_CR1_jetgamma_1, N_CR1_jetgamma_2, N_CR1_jetgamma_3, N_CR1_jetgamma_4, N_CR1_jetgamma_5, N_CR1_jetgamma_6, N_CR1_jetgamma_7, N_CR1_jetgamma_8, N_CR1_jetgamma_9, N_CR1_jetgamma_10, N_CR1_jetgamma_11, N_CR1_jetgamma_12, N_CR1_jetgamma_13, N_CR1_jetgamma_14, N_CR1_jetgamma_15;

  Int_t nbins=1;

  const char *path1 = "/home/valerian/programs/files/CR1_data_MM.root";
  const char *path2 = "/home/valerian/programs/files/CR1_sig_MM.root";
  const char *path3 = "/home/valerian/programs/files/CR1_bkg_MM.root";

  const char *path4 = "/home/valerian/programs/files/CR2_data_MM.root";
  const char *path5 = "/home/valerian/programs/files/CR2_sig_MM.root";
  const char *path6 = "/home/valerian/programs/files/CR2_bkg_MM.root";

  TFile *file_1 = new TFile(path1, "READ");
  TFile *file_2 = new TFile(path2, "READ");
  TFile *file_3 = new TFile(path3, "READ");

  TFile *file_4 = new TFile(path4, "READ");
  TFile *file_5 = new TFile(path5, "READ");
  TFile *file_6 = new TFile(path6, "READ");

  TH1D *hist_CR1_data_1=(file_1->Get<TH1D>("hist_CR1_data_1"));
  TH1D *hist_CR1_data_2=(file_1->Get<TH1D>("hist_CR1_data_2"));
  TH1D *hist_CR1_data_3=(file_1->Get<TH1D>("hist_CR1_data_3"));
  TH1D *hist_CR1_data_4=(file_1->Get<TH1D>("hist_CR1_data_4"));
  TH1D *hist_CR1_data_5=(file_1->Get<TH1D>("hist_CR1_data_5"));
  TH1D *hist_CR1_data_6=(file_1->Get<TH1D>("hist_CR1_data_6"));
  TH1D *hist_CR1_data_7=(file_1->Get<TH1D>("hist_CR1_data_7"));
  TH1D *hist_CR1_data_8=(file_1->Get<TH1D>("hist_CR1_data_8"));
  TH1D *hist_CR1_data_9=(file_1->Get<TH1D>("hist_CR1_data_9"));
  TH1D *hist_CR1_data_10=(file_1->Get<TH1D>("hist_CR1_data_10"));
  // TH1D *hist_CR1_data_11=(file_1->Get<TH1D>("hist_CR1_data_11"));
  // TH1D *hist_CR1_data_12=(file_1->Get<TH1D>("hist_CR1_data_12"));
  // TH1D *hist_CR1_data_13=(file_1->Get<TH1D>("hist_CR1_data_13"));
  // TH1D *hist_CR1_data_14=(file_1->Get<TH1D>("hist_CR1_data_14"));
  // TH1D *hist_CR1_data_15=(file_1->Get<TH1D>("hist_CR1_data_15"));

  TH1D *hist_CR2_data_1=(file_4->Get<TH1D>("hist_CR2_data_1"));
  TH1D *hist_CR2_data_2=(file_4->Get<TH1D>("hist_CR2_data_2"));
  TH1D *hist_CR2_data_3=(file_4->Get<TH1D>("hist_CR2_data_3"));
  TH1D *hist_CR2_data_4=(file_4->Get<TH1D>("hist_CR2_data_4"));
  TH1D *hist_CR2_data_5=(file_4->Get<TH1D>("hist_CR2_data_5"));
  TH1D *hist_CR2_data_6=(file_4->Get<TH1D>("hist_CR2_data_6"));
  TH1D *hist_CR2_data_7=(file_4->Get<TH1D>("hist_CR2_data_7"));
  TH1D *hist_CR2_data_8=(file_4->Get<TH1D>("hist_CR2_data_8"));
  TH1D *hist_CR2_data_9=(file_4->Get<TH1D>("hist_CR2_data_9"));
  TH1D *hist_CR2_data_10=(file_4->Get<TH1D>("hist_CR2_data_10"));
  // TH1D *hist_CR2_data_11=(file_4->Get<TH1D>("hist_CR2_data_11"));
  // TH1D *hist_CR2_data_12=(file_4->Get<TH1D>("hist_CR2_data_12"));
  // TH1D *hist_CR2_data_13=(file_4->Get<TH1D>("hist_CR2_data_13"));
  // TH1D *hist_CR2_data_14=(file_4->Get<TH1D>("hist_CR2_data_14"));
  // TH1D *hist_CR2_data_15=(file_4->Get<TH1D>("hist_CR2_data_15"));

  // N_CR1_data_1=hist_CR1_data_1->IntegralAndError(1, nbins, error_CR1_data_1, "");
  // N_CR1_data_2=hist_CR1_data_2->IntegralAndError(1, nbins, error_CR1_data_2, "");
  // N_CR1_data_3=hist_CR1_data_3->IntegralAndError(1, nbins, error_CR1_data_3, "");
  // N_CR1_data_4=hist_CR1_data_4->IntegralAndError(1, nbins, error_CR1_data_4, "");
  // N_CR1_data_5=hist_CR1_data_5->IntegralAndError(1, nbins, error_CR1_data_5, "");
  //
  // N_CR2_data_1=hist_CR2_data_1->IntegralAndError(1, nbins, error_CR2_data_1, "");
  // N_CR2_data_2=hist_CR2_data_2->IntegralAndError(1, nbins, error_CR2_data_2, "");
  // N_CR2_data_3=hist_CR2_data_3->IntegralAndError(1, nbins, error_CR2_data_3, "");
  // N_CR2_data_4=hist_CR2_data_4->IntegralAndError(1, nbins, error_CR2_data_4, "");
  // N_CR2_data_5=hist_CR2_data_5->IntegralAndError(1, nbins, error_CR2_data_5, "");

  TH1D *hist_CR1_sig_1=(file_2->Get<TH1D>("hist_CR1_sig_1"));
  TH1D *hist_CR1_sig_2=(file_2->Get<TH1D>("hist_CR1_sig_2"));
  TH1D *hist_CR1_sig_3=(file_2->Get<TH1D>("hist_CR1_sig_3"));
  TH1D *hist_CR1_sig_4=(file_2->Get<TH1D>("hist_CR1_sig_4"));
  TH1D *hist_CR1_sig_5=(file_2->Get<TH1D>("hist_CR1_sig_5"));
  TH1D *hist_CR1_sig_6=(file_2->Get<TH1D>("hist_CR1_sig_6"));
  TH1D *hist_CR1_sig_7=(file_2->Get<TH1D>("hist_CR1_sig_7"));
  TH1D *hist_CR1_sig_8=(file_2->Get<TH1D>("hist_CR1_sig_8"));
  TH1D *hist_CR1_sig_9=(file_2->Get<TH1D>("hist_CR1_sig_9"));
  TH1D *hist_CR1_sig_10=(file_2->Get<TH1D>("hist_CR1_sig_10"));
  // TH1D *hist_CR1_sig_11=(file_2->Get<TH1D>("hist_CR1_sig_11"));
  // TH1D *hist_CR1_sig_12=(file_2->Get<TH1D>("hist_CR1_sig_12"));
  // TH1D *hist_CR1_sig_13=(file_2->Get<TH1D>("hist_CR1_sig_13"));
  // TH1D *hist_CR1_sig_14=(file_2->Get<TH1D>("hist_CR1_sig_14"));
  // TH1D *hist_CR1_sig_15=(file_2->Get<TH1D>("hist_CR1_sig_15"));

  TH1D *hist_CR2_sig_1=(file_5->Get<TH1D>("hist_CR2_sig_1"));
  TH1D *hist_CR2_sig_2=(file_5->Get<TH1D>("hist_CR2_sig_2"));
  TH1D *hist_CR2_sig_3=(file_5->Get<TH1D>("hist_CR2_sig_3"));
  TH1D *hist_CR2_sig_4=(file_5->Get<TH1D>("hist_CR2_sig_4"));
  TH1D *hist_CR2_sig_5=(file_5->Get<TH1D>("hist_CR2_sig_5"));
  TH1D *hist_CR2_sig_6=(file_5->Get<TH1D>("hist_CR2_sig_6"));
  TH1D *hist_CR2_sig_7=(file_5->Get<TH1D>("hist_CR2_sig_7"));
  TH1D *hist_CR2_sig_8=(file_5->Get<TH1D>("hist_CR2_sig_8"));
  TH1D *hist_CR2_sig_9=(file_5->Get<TH1D>("hist_CR2_sig_9"));
  TH1D *hist_CR2_sig_10=(file_5->Get<TH1D>("hist_CR2_sig_10"));
  // TH1D *hist_CR2_sig_11=(file_5->Get<TH1D>("hist_CR2_sig_11"));
  // TH1D *hist_CR2_sig_12=(file_5->Get<TH1D>("hist_CR2_sig_12"));
  // TH1D *hist_CR2_sig_13=(file_5->Get<TH1D>("hist_CR2_sig_13"));
  // TH1D *hist_CR2_sig_14=(file_5->Get<TH1D>("hist_CR2_sig_14"));
  // TH1D *hist_CR2_sig_15=(file_5->Get<TH1D>("hist_CR2_sig_15"));

  // N_CR1_sig_1=hist_CR1_sig_1->IntegralAndError(1, nbins, error_CR1_sig_1, "");
  // N_CR1_sig_2=hist_CR1_sig_2->IntegralAndError(1, nbins, error_CR1_sig_2, "");
  // N_CR1_sig_3=hist_CR1_sig_3->IntegralAndError(1, nbins, error_CR1_sig_3, "");
  // N_CR1_sig_4=hist_CR1_sig_4->IntegralAndError(1, nbins, error_CR1_sig_4, "");
  // N_CR1_sig_5=hist_CR1_sig_5->IntegralAndError(1, nbins, error_CR1_sig_5, "");
  // N_CR1_sig_6=hist_CR1_sig_6->IntegralAndError(1, nbins, error_CR1_sig_6, "");
  // N_CR1_sig_7=hist_CR1_sig_7->IntegralAndError(1, nbins, error_CR1_sig_7, "");
  // N_CR1_sig_8=hist_CR1_sig_8->IntegralAndError(1, nbins, error_CR1_sig_8, "");

  // N_CR2_sig_1=hist_CR2_sig_1->IntegralAndError(1, nbins, error_CR2_sig_1, "");
  // N_CR2_sig_2=hist_CR2_sig_2->IntegralAndError(1, nbins, error_CR2_sig_2, "");
  // N_CR2_sig_3=hist_CR2_sig_3->IntegralAndError(1, nbins, error_CR2_sig_3, "");
  // N_CR2_sig_4=hist_CR2_sig_4->IntegralAndError(1, nbins, error_CR2_sig_4, "");
  // N_CR2_sig_5=hist_CR2_sig_5->IntegralAndError(1, nbins, error_CR2_sig_5, "");
  // N_CR2_sig_6=hist_CR2_sig_6->IntegralAndError(1, nbins, error_CR2_sig_6, "");
  // N_CR2_sig_7=hist_CR2_sig_7->IntegralAndError(1, nbins, error_CR2_sig_7, "");
  // N_CR2_sig_8=hist_CR2_sig_8->IntegralAndError(1, nbins, error_CR2_sig_8, "");

  TH1D *hist_CR1_bkg_1=(file_3->Get<TH1D>("hist_CR1_bkg_1"));
  TH1D *hist_CR1_bkg_2=(file_3->Get<TH1D>("hist_CR1_bkg_2"));
  TH1D *hist_CR1_bkg_3=(file_3->Get<TH1D>("hist_CR1_bkg_3"));
  TH1D *hist_CR1_bkg_4=(file_3->Get<TH1D>("hist_CR1_bkg_4"));
  TH1D *hist_CR1_bkg_5=(file_3->Get<TH1D>("hist_CR1_bkg_5"));
  TH1D *hist_CR1_bkg_6=(file_3->Get<TH1D>("hist_CR1_bkg_6"));
  TH1D *hist_CR1_bkg_7=(file_3->Get<TH1D>("hist_CR1_bkg_7"));
  TH1D *hist_CR1_bkg_8=(file_3->Get<TH1D>("hist_CR1_bkg_8"));
  TH1D *hist_CR1_bkg_9=(file_3->Get<TH1D>("hist_CR1_bkg_9"));
  TH1D *hist_CR1_bkg_10=(file_3->Get<TH1D>("hist_CR1_bkg_10"));
  // TH1D *hist_CR1_bkg_11=(file_3->Get<TH1D>("hist_CR1_bkg_11"));
  // TH1D *hist_CR1_bkg_12=(file_3->Get<TH1D>("hist_CR1_bkg_12"));
  // TH1D *hist_CR1_bkg_13=(file_3->Get<TH1D>("hist_CR1_bkg_13"));
  // TH1D *hist_CR1_bkg_14=(file_3->Get<TH1D>("hist_CR1_bkg_14"));
  // TH1D *hist_CR1_bkg_15=(file_3->Get<TH1D>("hist_CR1_bkg_15"));

  TH1D *hist_CR2_bkg_1=(file_6->Get<TH1D>("hist_CR2_bkg_1"));
  TH1D *hist_CR2_bkg_2=(file_6->Get<TH1D>("hist_CR2_bkg_2"));
  TH1D *hist_CR2_bkg_3=(file_6->Get<TH1D>("hist_CR2_bkg_3"));
  TH1D *hist_CR2_bkg_4=(file_6->Get<TH1D>("hist_CR2_bkg_4"));
  TH1D *hist_CR2_bkg_5=(file_6->Get<TH1D>("hist_CR2_bkg_5"));
  TH1D *hist_CR2_bkg_6=(file_6->Get<TH1D>("hist_CR2_bkg_6"));
  TH1D *hist_CR2_bkg_7=(file_6->Get<TH1D>("hist_CR2_bkg_7"));
  TH1D *hist_CR2_bkg_8=(file_6->Get<TH1D>("hist_CR2_bkg_8"));
  TH1D *hist_CR2_bkg_9=(file_6->Get<TH1D>("hist_CR2_bkg_9"));
  TH1D *hist_CR2_bkg_10=(file_6->Get<TH1D>("hist_CR2_bkg_10"));
  // TH1D *hist_CR2_bkg_11=(file_6->Get<TH1D>("hist_CR2_bkg_11"));
  // TH1D *hist_CR2_bkg_12=(file_6->Get<TH1D>("hist_CR2_bkg_12"));
  // TH1D *hist_CR2_bkg_13=(file_6->Get<TH1D>("hist_CR2_bkg_13"));
  // TH1D *hist_CR2_bkg_14=(file_6->Get<TH1D>("hist_CR2_bkg_14"));
  // TH1D *hist_CR2_bkg_15=(file_6->Get<TH1D>("hist_CR2_bkg_15"));

  // N_CR1_bac_1=hist_CR1_bkg_1->IntegralAndError(1, nbins, error_CR1_bac_1, "");
  // N_CR1_bac_2=hist_CR1_bkg_2->IntegralAndError(1, nbins, error_CR1_bac_2, "");
  // N_CR1_bac_3=hist_CR1_bkg_3->IntegralAndError(1, nbins, error_CR1_bac_3, "");
  // N_CR1_bac_4=hist_CR1_bkg_4->IntegralAndError(1, nbins, error_CR1_bac_4, "");
  // N_CR1_bac_5=hist_CR1_bkg_5->IntegralAndError(1, nbins, error_CR1_bac_5, "");
  // N_CR1_bac_6=hist_CR1_bkg_6->IntegralAndError(1, nbins, error_CR1_bac_6, "");
  // N_CR1_bac_7=hist_CR1_bkg_7->IntegralAndError(1, nbins, error_CR1_bac_7, "");
  // N_CR1_bac_8=hist_CR1_bkg_8->IntegralAndError(1, nbins, error_CR1_bac_8, "");

  // N_CR2_bac_1=hist_CR2_bkg_1->IntegralAndError(1, nbins, error_CR2_bac_1, "");
  // N_CR2_bac_2=hist_CR2_bkg_2->IntegralAndError(1, nbins, error_CR2_bac_2, "");
  // N_CR2_bac_3=hist_CR2_bkg_3->IntegralAndError(1, nbins, error_CR2_bac_3, "");
  // N_CR2_bac_4=hist_CR2_bkg_4->IntegralAndError(1, nbins, error_CR2_bac_4, "");
  // N_CR2_bac_5=hist_CR2_bkg_5->IntegralAndError(1, nbins, error_CR2_bac_5, "");
  // N_CR2_bac_6=hist_CR2_bkg_6->IntegralAndError(1, nbins, error_CR2_bac_6, "");
  // N_CR2_bac_7=hist_CR2_bkg_7->IntegralAndError(1, nbins, error_CR2_bac_7, "");
  // N_CR2_bac_8=hist_CR2_bkg_8->IntegralAndError(1, nbins, error_CR2_bac_8, "");

  // std::cout << "slice 1 " << " N_CR1_data_1=" << N_CR1_data_1 << " +- " << error_CR1_data_1 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 2 " << " N_CR1_data_2=" << N_CR1_data_2 << " +- " << error_CR1_data_2 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 3 " << " N_CR1_data_3=" << N_CR1_data_3 << " +- " << error_CR1_data_3 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 4 " << " N_CR1_data_4=" << N_CR1_data_4 << " +- " << error_CR1_data_4 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 5 " <<" N_CR1_data_5=" << N_CR1_data_5 << " +- " << error_CR1_data_5 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 1 " << " N_CR1_bac_1=" << N_CR1_bac_1 << " +- " << error_CR1_bac_1 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 2 " << " N_CR1_bac_2=" << N_CR1_bac_2 << " +- " << error_CR1_bac_2 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 3 " << " N_CR1_bac_3=" << N_CR1_bac_3 << " +- " << error_CR1_bac_3 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 4 " << " N_CR1_bac_4=" << N_CR1_bac_4 << " +- " << error_CR1_bac_4 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 5 " <<" N_CR1_bac_5=" << N_CR1_bac_5 << " +- " << error_CR1_bac_5 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 1 " << " N_CR1_sig_1=" << N_CR1_sig_1 << " +- " << error_CR1_sig_1 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 2 " << " N_CR1_sig_2=" << N_CR1_sig_2 << " +- " << error_CR1_sig_2 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 3 " << " N_CR1_sig_3=" << N_CR1_sig_3 << " +- " << error_CR1_sig_3 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 4 " << " N_CR1_sig_4=" << N_CR1_sig_4 << " +- " << error_CR1_sig_4 << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 5 " <<" N_CR1_sig_5=" << N_CR1_sig_5 << " +- " << error_CR1_sig_5 << '\n';
  // std::cout << "" << '\n';
  //
  //
  // std::cout << "slice 1 " << " N_CR1_jetgamma_1=" << N_CR1_data_1-N_CR1_sig_1-N_CR1_bac_1 << " +- " << sqrt(pow(error_CR1_sig_1,2)+pow(error_CR1_data_1,2)+pow(error_CR1_bac_1,2)) << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 2 " <<" N_CR1_jetgamma_2=" << N_CR1_data_2-N_CR1_sig_2-N_CR1_bac_2 << " +- " << sqrt(pow(error_CR1_sig_2,2)+pow(error_CR1_data_2,2)+pow(error_CR1_bac_2,2)) << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 3 " << " N_CR1_jetgamma_3=" << N_CR1_data_3-N_CR1_sig_3-N_CR1_bac_3 << " +- " << sqrt(pow(error_CR1_sig_3,2)+pow(error_CR1_data_3,2)+pow(error_CR1_bac_3,2)) << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 4 " << " N_CR1_jetgamma_4=" << N_CR1_data_4-N_CR1_sig_4-N_CR1_bac_4 << " +- " << sqrt(pow(error_CR1_sig_4,2)+pow(error_CR1_data_4,2)+pow(error_CR1_bac_4,2)) << '\n';
  // std::cout << "" << '\n';
  //
  // std::cout << "slice 5 " <<" N_CR1_jetgamma_5=" << N_CR1_data_5-N_CR1_sig_5-N_CR1_bac_5 << " +- " << sqrt(pow(error_CR1_sig_5,2)+pow(error_CR1_data_5,2)+pow(error_CR1_bac_5,2)) << '\n';
  // std::cout << "" << '\n';

    hist_CR1_data_1->Add(hist_CR1_bkg_1,-1);
    hist_CR1_data_2->Add(hist_CR1_bkg_2,-1);
    hist_CR1_data_3->Add(hist_CR1_bkg_3,-1);
    hist_CR1_data_4->Add(hist_CR1_bkg_4,-1);
    hist_CR1_data_5->Add(hist_CR1_bkg_5,-1);
    hist_CR1_data_6->Add(hist_CR1_bkg_6,-1);
    hist_CR1_data_7->Add(hist_CR1_bkg_7,-1);
    hist_CR1_data_8->Add(hist_CR1_bkg_8,-1);
    hist_CR1_data_9->Add(hist_CR1_bkg_9,-1);
    hist_CR1_data_10->Add(hist_CR1_bkg_10,-1);
    // hist_CR1_data_11->Add(hist_CR1_bkg_11,-1);
    // hist_CR1_data_12->Add(hist_CR1_bkg_12,-1);
    // hist_CR1_data_13->Add(hist_CR1_bkg_13,-1);
    // hist_CR1_data_14->Add(hist_CR1_bkg_14,-1);
    // hist_CR1_data_15->Add(hist_CR1_bkg_15,-1);

    hist_CR1_data_1->Add(hist_CR1_sig_1,-1);
    hist_CR1_data_2->Add(hist_CR1_sig_2,-1);
    hist_CR1_data_3->Add(hist_CR1_sig_3,-1);
    hist_CR1_data_4->Add(hist_CR1_sig_4,-1);
    hist_CR1_data_5->Add(hist_CR1_sig_5,-1);
    hist_CR1_data_6->Add(hist_CR1_sig_6,-1);
    hist_CR1_data_7->Add(hist_CR1_sig_7,-1);
    hist_CR1_data_8->Add(hist_CR1_sig_8,-1);
    hist_CR1_data_9->Add(hist_CR1_sig_9,-1);
    hist_CR1_data_10->Add(hist_CR1_sig_10,-1);
    // hist_CR1_data_11->Add(hist_CR1_sig_11,-1);
    // hist_CR1_data_12->Add(hist_CR1_sig_12,-1);
    // hist_CR1_data_13->Add(hist_CR1_sig_13,-1);
    // hist_CR1_data_14->Add(hist_CR1_sig_14,-1);
    // hist_CR1_data_15->Add(hist_CR1_sig_15,-1);

    hist_CR2_data_1->Add(hist_CR2_bkg_1,-1);
    hist_CR2_data_2->Add(hist_CR2_bkg_2,-1);
    hist_CR2_data_3->Add(hist_CR2_bkg_3,-1);
    hist_CR2_data_4->Add(hist_CR2_bkg_4,-1);
    hist_CR2_data_5->Add(hist_CR2_bkg_5,-1);
    hist_CR2_data_6->Add(hist_CR2_bkg_6,-1);
    hist_CR2_data_7->Add(hist_CR2_bkg_7,-1);
    hist_CR2_data_8->Add(hist_CR2_bkg_8,-1);
    hist_CR1_data_9->Add(hist_CR1_sig_9,-1);
    hist_CR1_data_10->Add(hist_CR1_sig_10,-1);
    // hist_CR1_data_11->Add(hist_CR1_sig_11,-1);
    // hist_CR1_data_12->Add(hist_CR1_sig_12,-1);
    // hist_CR1_data_13->Add(hist_CR1_sig_13,-1);
    // hist_CR1_data_14->Add(hist_CR1_sig_14,-1);
    // hist_CR1_data_15->Add(hist_CR1_sig_15,-1);

    hist_CR2_data_1->Add(hist_CR2_sig_1,-1);
    hist_CR2_data_2->Add(hist_CR2_sig_2,-1);
    hist_CR2_data_3->Add(hist_CR2_sig_3,-1);
    hist_CR2_data_4->Add(hist_CR2_sig_4,-1);
    hist_CR2_data_5->Add(hist_CR2_sig_5,-1);
    hist_CR2_data_6->Add(hist_CR2_sig_6,-1);
    hist_CR2_data_7->Add(hist_CR2_sig_7,-1);
    hist_CR2_data_8->Add(hist_CR2_sig_8,-1);
    hist_CR2_data_9->Add(hist_CR2_sig_9,-1);
    hist_CR2_data_10->Add(hist_CR2_sig_10,-1);
    // hist_CR2_data_11->Add(hist_CR2_sig_11,-1);
    // hist_CR2_data_12->Add(hist_CR2_sig_12,-1);
    // hist_CR2_data_13->Add(hist_CR2_sig_13,-1);
    // hist_CR2_data_14->Add(hist_CR2_sig_14,-1);
    // hist_CR2_data_15->Add(hist_CR2_sig_15,-1);
     //
     // TFile *file_CR1 = new TFile ("CR1_jetgamma_MM.root","RECREATE");
     //    hist_CR1_data_1->Write();
     //    hist_CR1_data_2->Write();
     //    hist_CR1_data_3->Write();
     //    hist_CR1_data_4->Write();
     //    hist_CR1_data_5->Write();
     //    file_CR1->Close();
     //
     //  TFile *file_CR2 = new TFile ("CR2_jetgamma_MM.root","RECREATE");
     //    hist_CR2_data_1->Write();
     //    hist_CR2_data_2->Write();
     //    hist_CR2_data_3->Write();
     //    hist_CR2_data_4->Write();
     //    hist_CR2_data_5->Write();
     //    file_CR2->Close();

        N_CR1_jetgamma_1=hist_CR1_data_1->IntegralAndError(1, nbins, error_CR1_data_1, "");
        N_CR1_jetgamma_2=hist_CR1_data_2->IntegralAndError(1, nbins, error_CR1_data_2, "");
        N_CR1_jetgamma_3=hist_CR1_data_3->IntegralAndError(1, nbins, error_CR1_data_3, "");
        N_CR1_jetgamma_4=hist_CR1_data_4->IntegralAndError(1, nbins, error_CR1_data_4, "");
        N_CR1_jetgamma_5=hist_CR1_data_5->IntegralAndError(1, nbins, error_CR1_data_5, "");
        N_CR1_jetgamma_6=hist_CR1_data_6->IntegralAndError(1, nbins, error_CR1_data_6, "");
        N_CR1_jetgamma_7=hist_CR1_data_7->IntegralAndError(1, nbins, error_CR1_data_7, "");
        N_CR1_jetgamma_8=hist_CR1_data_8->IntegralAndError(1, nbins, error_CR1_data_8, "");
        N_CR1_jetgamma_9=hist_CR1_data_9->IntegralAndError(1, nbins, error_CR1_data_9, "");
        N_CR1_jetgamma_10=hist_CR1_data_10->IntegralAndError(1, nbins, error_CR1_data_10, "");
        // N_CR1_jetgamma_11=hist_CR1_data_11->IntegralAndError(1, nbins, error_CR1_data_11, "");
        // N_CR1_jetgamma_12=hist_CR1_data_12->IntegralAndError(1, nbins, error_CR1_data_12, "");
        // N_CR1_jetgamma_13=hist_CR1_data_13->IntegralAndError(1, nbins, error_CR1_data_13, "");
        // N_CR1_jetgamma_14=hist_CR1_data_14->IntegralAndError(1, nbins, error_CR1_data_14, "");
        // N_CR1_jetgamma_15=hist_CR1_data_15->IntegralAndError(1, nbins, error_CR1_data_15, "");

        N_CR2_jetgamma_1=hist_CR2_data_1->IntegralAndError(1, nbins, error_CR2_data_1, "");
        N_CR2_jetgamma_2=hist_CR2_data_2->IntegralAndError(1, nbins, error_CR2_data_2, "");
        N_CR2_jetgamma_3=hist_CR2_data_3->IntegralAndError(1, nbins, error_CR2_data_3, "");
        N_CR2_jetgamma_4=hist_CR2_data_4->IntegralAndError(1, nbins, error_CR2_data_4, "");
        N_CR2_jetgamma_5=hist_CR2_data_5->IntegralAndError(1, nbins, error_CR2_data_5, "");
        N_CR2_jetgamma_6=hist_CR2_data_6->IntegralAndError(1, nbins, error_CR2_data_6, "");
        N_CR2_jetgamma_7=hist_CR2_data_7->IntegralAndError(1, nbins, error_CR2_data_7, "");
        N_CR2_jetgamma_8=hist_CR2_data_8->IntegralAndError(1, nbins, error_CR2_data_8, "");
        N_CR2_jetgamma_9=hist_CR2_data_9->IntegralAndError(1, nbins, error_CR2_data_9, "");
        N_CR2_jetgamma_10=hist_CR2_data_10->IntegralAndError(1, nbins, error_CR2_data_10, "");
        // N_CR2_jetgamma_11=hist_CR2_data_11->IntegralAndError(1, nbins, error_CR2_data_11, "");
        // N_CR2_jetgamma_12=hist_CR2_data_12->IntegralAndError(1, nbins, error_CR2_data_12, "");
        // N_CR2_jetgamma_13=hist_CR2_data_13->IntegralAndError(1, nbins, error_CR2_data_13, "");
        // N_CR2_jetgamma_14=hist_CR2_data_14->IntegralAndError(1, nbins, error_CR2_data_14, "");
        // N_CR2_jetgamma_15=hist_CR2_data_15->IntegralAndError(1, nbins, error_CR2_data_15, "");

        Double_t error_f_1 =sqrt(pow(error_CR1_data_1/N_CR2_jetgamma_1,2)+pow(N_CR1_jetgamma_1*error_CR2_data_1/pow(N_CR2_jetgamma_1,2),2));
        Double_t error_f_2 =sqrt(pow(error_CR1_data_2/N_CR2_jetgamma_2,2)+pow(N_CR1_jetgamma_2*error_CR2_data_2/pow(N_CR2_jetgamma_2,2),2));
        Double_t error_f_3 =sqrt(pow(error_CR1_data_3/N_CR2_jetgamma_3,2)+pow(N_CR1_jetgamma_3*error_CR2_data_3/pow(N_CR2_jetgamma_3,2),2));
        Double_t error_f_4 =sqrt(pow(error_CR1_data_4/N_CR2_jetgamma_4,2)+pow(N_CR1_jetgamma_4*error_CR2_data_4/pow(N_CR2_jetgamma_4,2),2));
        Double_t error_f_5 =sqrt(pow(error_CR1_data_5/N_CR2_jetgamma_5,2)+pow(N_CR1_jetgamma_5*error_CR2_data_5/pow(N_CR2_jetgamma_5,2),2));
        Double_t error_f_6 =sqrt(pow(error_CR1_data_6/N_CR2_jetgamma_6,2)+pow(N_CR1_jetgamma_6*error_CR2_data_6/pow(N_CR2_jetgamma_6,2),2));
        Double_t error_f_7 =sqrt(pow(error_CR1_data_7/N_CR2_jetgamma_7,2)+pow(N_CR1_jetgamma_7*error_CR2_data_7/pow(N_CR2_jetgamma_7,2),2));
        Double_t error_f_8 =sqrt(pow(error_CR1_data_8/N_CR2_jetgamma_8,2)+pow(N_CR1_jetgamma_8*error_CR2_data_8/pow(N_CR2_jetgamma_8,2),2));
        Double_t error_f_9 =sqrt(pow(error_CR1_data_9/N_CR2_jetgamma_9,2)+pow(N_CR1_jetgamma_9*error_CR2_data_9/pow(N_CR2_jetgamma_9,2),2));
        Double_t error_f_10 =sqrt(pow(error_CR1_data_10/N_CR2_jetgamma_10,2)+pow(N_CR1_jetgamma_10*error_CR2_data_10/pow(N_CR2_jetgamma_10,2),2));
        // Double_t error_f_11 =sqrt(pow(error_CR1_data_11/N_CR2_jetgamma_11,2)+pow(N_CR1_jetgamma_11*error_CR2_data_11/pow(N_CR2_jetgamma_11,2),2));
        // Double_t error_f_12 =sqrt(pow(error_CR1_data_12/N_CR2_jetgamma_12,2)+pow(N_CR1_jetgamma_12*error_CR2_data_12/pow(N_CR2_jetgamma_12,2),2));
        // Double_t error_f_13 =sqrt(pow(error_CR1_data_13/N_CR2_jetgamma_13,2)+pow(N_CR1_jetgamma_13*error_CR2_data_13/pow(N_CR2_jetgamma_13,2),2));
        // Double_t error_f_14 =sqrt(pow(error_CR1_data_14/N_CR2_jetgamma_14,2)+pow(N_CR1_jetgamma_14*error_CR2_data_14/pow(N_CR2_jetgamma_14,2),2));
        // Double_t error_f_15 =sqrt(pow(error_CR1_data_15/N_CR2_jetgamma_15,2)+pow(N_CR1_jetgamma_15*error_CR2_data_15/pow(N_CR2_jetgamma_15,2),2));

        std::cout << "slice 1 " << " f_1= " << N_CR1_jetgamma_1/N_CR2_jetgamma_1 << " +- " << error_f_1 << "    N_CR1_jetgamma_1=" << N_CR1_jetgamma_1 << " +- " << error_CR1_data_1 << "    N_CR2_jetgamma_1=" << N_CR2_jetgamma_1 << " +- " << error_CR2_data_1 << '\n';
        std::cout << "" << '\n';

        std::cout << "slice 2 " << " f_2= " << N_CR1_jetgamma_2/N_CR2_jetgamma_2 << " +- " << error_f_2 << "    N_CR1_jetgamma_2=" << N_CR1_jetgamma_2 << " +- " << error_CR1_data_2 << "    N_CR2_jetgamma_2=" << N_CR2_jetgamma_2 << " +- " << error_CR2_data_2 << '\n';
        std::cout << "" << '\n';

        std::cout << "slice 3 " << " f_3= " << N_CR1_jetgamma_3/N_CR2_jetgamma_3 << " +- " << error_f_3 << "    N_CR1_jetgamma_3=" << N_CR1_jetgamma_3 << " +- " << error_CR1_data_3 << "    N_CR2_jetgamma_3=" << N_CR2_jetgamma_3<< " +- " << error_CR2_data_3 << '\n';
        std::cout << "" << '\n';

        std::cout << "slice 4 " << " f_4= " << N_CR1_jetgamma_4/N_CR2_jetgamma_4 << " +- " << error_f_4 << "    N_CR1_jetgamma_4=" << N_CR1_jetgamma_4 << " +- " << error_CR1_data_4 << "    N_CR2_jetgamma_4=" << N_CR2_jetgamma_4 << " +- " << error_CR2_data_4 << '\n';
        std::cout << "" << '\n';

        std::cout << "slice 5 " <<" f_5= " << N_CR1_jetgamma_5/N_CR2_jetgamma_5 << " +- " << error_f_5 << "    N_CR1_jetgamma_5=" << N_CR1_jetgamma_5 << " +- " << error_CR1_data_5 << "    N_CR2_jetgamma_5=" << N_CR2_jetgamma_5 << " +- " << error_CR2_data_5 << '\n';
        std::cout << "" << '\n';

        std::cout << "slice 6 " <<" f_6= " << N_CR1_jetgamma_6/N_CR2_jetgamma_6 << " +- " << error_f_6 << "    N_CR1_jetgamma_6=" << N_CR1_jetgamma_6 << " +- " << error_CR1_data_6 << "    N_CR2_jetgamma_6=" << N_CR2_jetgamma_6 << " +- " << error_CR2_data_6 << '\n';
        std::cout << "" << '\n';

        std::cout << "slice 7 " <<" f_7= " << N_CR1_jetgamma_7/N_CR2_jetgamma_7 << " +- " << error_f_7 << "    N_CR1_jetgamma_7=" << N_CR1_jetgamma_7 << " +- " << error_CR1_data_7 << "    N_CR2_jetgamma_7=" << N_CR2_jetgamma_7 << " +- " << error_CR2_data_7 << '\n';
        std::cout << "" << '\n';

        std::cout << "slice 8 " <<" f_8= " << N_CR1_jetgamma_8/N_CR2_jetgamma_8 << " +- " << error_f_8 << "    N_CR1_jetgamma_8=" << N_CR1_jetgamma_8 << " +- " << error_CR1_data_8 << "    N_CR2_jetgamma_8=" << N_CR2_jetgamma_8 << " +- " << error_CR2_data_8 << '\n';
        std::cout << "" << '\n';

        std::cout << "slice 9 " << " f_9= " << N_CR1_jetgamma_9/N_CR2_jetgamma_9 << " +- " << error_f_9 << "    N_CR1_jetgamma_9=" << N_CR1_jetgamma_9 << " +- " << error_CR1_data_9 << "    N_CR2_jetgamma_9=" << N_CR2_jetgamma_9 << " +- " << error_CR2_data_9 << '\n';
        std::cout << "" << '\n';

        std::cout << "slice 10 " << " f_10= " << N_CR1_jetgamma_10/N_CR2_jetgamma_10 << " +- " << error_f_10 << "    N_CR1_jetgamma_10=" << N_CR1_jetgamma_10 << " +- " << error_CR1_data_10 << "    N_CR2_jetgamma_10=" << N_CR2_jetgamma_10<< " +- " << error_CR2_data_10 << '\n';
        std::cout << "" << '\n';
        //
        // std::cout << "slice 11 " << " f_11= " << N_CR1_jetgamma_11/N_CR2_jetgamma_11 << " +- " << error_f_11 << "    N_CR1_jetgamma_11=" << N_CR1_jetgamma_11 << " +- " << error_CR1_data_11 << "    N_CR2_jetgamma_11=" << N_CR2_jetgamma_11 << " +- " << error_CR2_data_11 << '\n';
        // std::cout << "" << '\n';
        //
        // std::cout << "slice 12 " <<" f_12= " << N_CR1_jetgamma_12/N_CR2_jetgamma_12 << " +- " << error_f_12 << "    N_CR1_jetgamma_12=" << N_CR1_jetgamma_12 << " +- " << error_CR1_data_12 << "    N_CR2_jetgamma_12=" << N_CR2_jetgamma_12 << " +- " << error_CR2_data_12 << '\n';
        // std::cout << "" << '\n';
        //
        // std::cout << "slice 13 " <<" f_13= " << N_CR1_jetgamma_13/N_CR2_jetgamma_13 << " +- " << error_f_13 << "    N_CR1_jetgamma_13=" << N_CR1_jetgamma_13 << " +- " << error_CR1_data_13 << "    N_CR2_jetgamma_13=" << N_CR2_jetgamma_13 << " +- " << error_CR2_data_13 << '\n';
        // std::cout << "" << '\n';
        //
        // std::cout << "slice 14 " <<" f_14= " << N_CR1_jetgamma_14/N_CR2_jetgamma_14 << " +- " << error_f_14 << "    N_CR1_jetgamma_14=" << N_CR1_jetgamma_14 << " +- " << error_CR1_data_14 << "    N_CR2_jetgamma_14=" << N_CR2_jetgamma_14 << " +- " << error_CR2_data_14 << '\n';
        // std::cout << "" << '\n';
        //
        // std::cout << "slice 15 " <<" f_15= " << N_CR1_jetgamma_15/N_CR2_jetgamma_15 << " +- " << error_f_15 << "    N_CR1_jetgamma_15=" << N_CR1_jetgamma_15 << " +- " << error_CR1_data_15 << "    N_CR2_jetgamma_15=" << N_CR2_jetgamma_15 << " +- " << error_CR2_data_15 << '\n';
        // std::cout << "" << '\n';


}

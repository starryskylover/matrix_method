#include "AtlasStyle.C"
#include "AtlasLabels.C"
#include "AtlasUtils.C"

void matrix_method_10slices(){

  SetAtlasStyle();

  UInt_t PhotonID_r,PhotonID_f, PhotonID;
  Double_t IsolationVar, MissingMET,  MissingPhi, PhotonEta, PhotonPhi, PhotonPt, Weight;
  Double_t IsolationVar_r, MissingMET_r,  MissingPhi_r, PhotonEta_r, PhotonPhi_r, PhotonPt_r, Weight_r;
  Double_t IsolationVar_f, MissingMET_f,  MissingPhi_f, PhotonEta_f, PhotonPhi_f, PhotonPt_f, Weight_f;

  Double_t Isolation_point=0.0242572;

  Double_t error_CR1_sig_1, error_CR2_sig_1, error_CR1_sig_2, error_CR1_sig_3, error_CR1_sig_4, error_CR1_sig_5, error_CR1_sig_6, error_CR1_sig_7, error_CR1_sig_8, error_CR1_sig_9, error_CR1_sig_10, error_CR1_sig_11, error_CR1_sig_12, error_CR1_sig_13, error_CR1_sig_14, error_CR1_sig_15, error_CR2_sig_2, error_CR2_sig_3, error_CR2_sig_4, error_CR2_sig_5, error_CR2_sig_6, error_CR2_sig_7, error_CR2_sig_8, error_CR2_sig_9, error_CR2_sig_10, error_CR2_sig_11, error_CR2_sig_12, error_CR2_sig_13, error_CR2_sig_14, error_CR2_sig_15;
  Double_t N_CR1_sig_1, N_CR2_sig_1, N_CR1_sig_2, N_CR1_sig_3, N_CR1_sig_4, N_CR1_sig_5, N_CR1_sig_6, N_CR1_sig_7, N_CR1_sig_8, N_CR1_sig_9, N_CR1_sig_10, N_CR1_sig_11, N_CR1_sig_12, N_CR1_sig_13, N_CR1_sig_14, N_CR1_sig_15, N_CR2_sig_2, N_CR2_sig_3, N_CR2_sig_4, N_CR2_sig_5, N_CR2_sig_6, N_CR2_sig_7, N_CR2_sig_8, N_CR2_sig_9, N_CR2_sig_10, N_CR2_sig_11, N_CR2_sig_12, N_CR2_sig_13, N_CR2_sig_14, N_CR2_sig_15;

  Double_t error_CR1_bkg_1, error_CR2_bkg_1, error_CR1_bkg_2, error_CR1_bkg_3, error_CR1_bkg_4, error_CR1_bkg_5, error_CR1_bkg_6, error_CR1_bkg_7, error_CR1_bkg_8, error_CR1_bkg_9, error_CR1_bkg_10, error_CR1_bkg_11, error_CR1_bkg_12, error_CR1_bkg_13, error_CR1_bkg_14, error_CR1_bkg_15, error_CR2_bkg_2, error_CR2_bkg_3, error_CR2_bkg_4, error_CR2_bkg_5, error_CR2_bkg_6, error_CR2_bkg_7, error_CR2_bkg_8, error_CR2_bkg_9, error_CR2_bkg_10, error_CR2_bkg_11, error_CR2_bkg_12, error_CR2_bkg_13, error_CR2_bkg_14, error_CR2_bkg_15;
  Double_t N_CR1_bkg_1, N_CR2_bkg_1, N_CR1_bkg_2, N_CR1_bkg_3, N_CR1_bkg_4, N_CR1_bkg_5, N_CR1_bkg_6, N_CR1_bkg_7, N_CR1_bkg_8, N_CR1_bkg_9, N_CR1_bkg_10, N_CR1_bkg_11, N_CR1_bkg_12, N_CR1_bkg_13, N_CR1_bkg_14, N_CR1_bkg_15, N_CR2_bkg_2, N_CR2_bkg_3, N_CR2_bkg_4, N_CR2_bkg_5, N_CR2_bkg_6, N_CR2_bkg_7, N_CR2_bkg_8, N_CR2_bkg_9, N_CR2_bkg_10, N_CR2_bkg_11, N_CR2_bkg_12, N_CR2_bkg_13, N_CR2_bkg_14, N_CR2_bkg_15;

  Double_t error_CR1_bkg_excl_jg_1, error_CR2_bkg_excl_jg_1, error_CR1_bkg_excl_jg_2, error_CR1_bkg_excl_jg_3, error_CR1_bkg_excl_jg_4, error_CR1_bkg_excl_jg_5, error_CR1_bkg_excl_jg_6, error_CR1_bkg_excl_jg_7, error_CR1_bkg_excl_jg_8, error_CR1_bkg_excl_jg_9, error_CR1_bkg_excl_jg_10, error_CR1_bkg_excl_jg_11, error_CR1_bkg_excl_jg_12, error_CR1_bkg_excl_jg_13, error_CR1_bkg_excl_jg_14, error_CR1_bkg_excl_jg_15, error_CR2_bkg_excl_jg_2, error_CR2_bkg_excl_jg_3, error_CR2_bkg_excl_jg_4, error_CR2_bkg_excl_jg_5, error_CR2_bkg_excl_jg_6, error_CR2_bkg_excl_jg_7, error_CR2_bkg_excl_jg_8, error_CR2_bkg_excl_jg_9, error_CR2_bkg_excl_jg_10, error_CR2_bkg_excl_jg_11, error_CR2_bkg_excl_jg_12, error_CR2_bkg_excl_jg_13, error_CR2_bkg_excl_jg_14, error_CR2_bkg_excl_jg_15;
  Double_t N_CR1_bkg_excl_jg_1, N_CR2_bkg_excl_jg_1, N_CR1_bkg_excl_jg_2, N_CR1_bkg_excl_jg_3, N_CR1_bkg_excl_jg_4, N_CR1_bkg_excl_jg_5, N_CR1_bkg_excl_jg_6, N_CR1_bkg_excl_jg_7, N_CR1_bkg_excl_jg_8, N_CR1_bkg_excl_jg_9, N_CR1_bkg_excl_jg_10, N_CR1_bkg_excl_jg_11, N_CR1_bkg_excl_jg_12, N_CR1_bkg_excl_jg_13, N_CR1_bkg_excl_jg_14, N_CR1_bkg_excl_jg_15, N_CR2_bkg_excl_jg_2, N_CR2_bkg_excl_jg_3, N_CR2_bkg_excl_jg_4, N_CR2_bkg_excl_jg_5, N_CR2_bkg_excl_jg_6, N_CR2_bkg_excl_jg_7, N_CR2_bkg_excl_jg_8, N_CR2_bkg_excl_jg_9, N_CR2_bkg_excl_jg_10, N_CR2_bkg_excl_jg_11, N_CR2_bkg_excl_jg_12, N_CR2_bkg_excl_jg_13, N_CR2_bkg_excl_jg_14, N_CR2_bkg_excl_jg_15;

  Double_t error_CR1_data_1, error_CR1_data_2, error_CR1_data_3, error_CR1_data_4, error_CR1_data_5, error_CR1_data_6, error_CR1_data_7, error_CR1_data_8, error_CR1_data_9, error_CR1_data_10, error_CR1_data_11, error_CR1_data_12, error_CR1_data_13, error_CR1_data_14, error_CR1_data_15, error_CR2_data_1, error_CR2_data_2, error_CR2_data_3, error_CR2_data_4, error_CR2_data_5, error_CR2_data_6, error_CR2_data_7, error_CR2_data_8, error_CR2_data_9, error_CR2_data_10, error_CR2_data_11, error_CR2_data_12, error_CR2_data_13, error_CR2_data_14, error_CR2_data_15;
  Double_t N_CR1_data_1, N_CR1_data_2, N_CR1_data_3, N_CR1_data_4, N_CR1_data_5, N_CR1_data_6, N_CR1_data_7, N_CR1_data_8, N_CR1_data_9, N_CR1_data_10, N_CR1_data_11, N_CR1_data_12, N_CR1_data_13, N_CR1_data_14, N_CR1_data_15, N_CR2_data_1, N_CR2_data_2, N_CR2_data_3, N_CR2_data_4, N_CR2_data_5, N_CR2_data_6, N_CR2_data_7, N_CR2_data_8, N_CR2_data_9, N_CR2_data_10, N_CR2_data_11, N_CR2_data_12, N_CR2_data_13, N_CR2_data_14, N_CR2_data_15;

  Double_t error_non_t_bkg_1, error_non_t_bkg_2, error_non_t_bkg_3, error_non_t_bkg_4, error_non_t_bkg_5, error_non_t_bkg_6, error_non_t_bkg_7, error_non_t_bkg_8, error_non_t_bkg_9, error_non_t_bkg_10, error_non_t_bkg_11, error_non_t_bkg_12, error_non_t_bkg_13, error_non_t_bkg_14, error_non_t_bkg_15;
  Double_t N_non_t_bkg_1, N_non_t_bkg_2, N_non_t_bkg_3, N_non_t_bkg_4, N_non_t_bkg_5, N_non_t_bkg_6, N_non_t_bkg_7, N_non_t_bkg_8, N_non_t_bkg_9, N_non_t_bkg_10, N_non_t_bkg_11, N_non_t_bkg_12, N_non_t_bkg_13, N_non_t_bkg_14, N_non_t_bkg_15;

  Double_t error_non_t_sig_1, error_non_t_sig_2, error_non_t_sig_3, error_non_t_sig_4, error_non_t_sig_5, error_non_t_sig_6, error_non_t_sig_7, error_non_t_sig_8, error_non_t_sig_9, error_non_t_sig_10, error_non_t_sig_11, error_non_t_sig_12, error_non_t_sig_13, error_non_t_sig_14, error_non_t_sig_15;
  Double_t N_non_t_sig_1, N_non_t_sig_2, N_non_t_sig_3, N_non_t_sig_4, N_non_t_sig_5, N_non_t_sig_6, N_non_t_sig_7, N_non_t_sig_8, N_non_t_sig_9, N_non_t_sig_10, N_non_t_sig_11, N_non_t_sig_12, N_non_t_sig_13, N_non_t_sig_14, N_non_t_sig_15;

  Double_t error_non_t_bkg_excl_jg_1, error_non_t_bkg_excl_jg_2, error_non_t_bkg_excl_jg_3, error_non_t_bkg_excl_jg_4, error_non_t_bkg_excl_jg_5, error_non_t_bkg_excl_jg_6, error_non_t_bkg_excl_jg_7, error_non_t_bkg_excl_jg_8, error_non_t_bkg_excl_jg_9, error_non_t_bkg_excl_jg_10, error_non_t_bkg_excl_jg_11, error_non_t_bkg_excl_jg_12, error_non_t_bkg_excl_jg_13, error_non_t_bkg_excl_jg_14, error_non_t_bkg_excl_jg_15;
  Double_t N_non_t_bkg_excl_jg_1, N_non_t_bkg_excl_jg_2, N_non_t_bkg_excl_jg_3, N_non_t_bkg_excl_jg_4, N_non_t_bkg_excl_jg_5, N_non_t_bkg_excl_jg_6, N_non_t_bkg_excl_jg_7, N_non_t_bkg_excl_jg_8, N_non_t_bkg_excl_jg_9, N_non_t_bkg_excl_jg_10, N_non_t_bkg_excl_jg_11, N_non_t_bkg_excl_jg_12, N_non_t_bkg_excl_jg_13, N_non_t_bkg_excl_jg_14, N_non_t_bkg_excl_jg_15;

  Double_t N_data_iso, error_data_iso, N_sig_iso, error_sig_iso, N_bkg_iso, error_bkg_iso, N_bkg_excl_jg_iso, error_bkg_excl_jg_iso;

  Int_t nbins=10;

  Double_t slice_1=0.065, slice_2=0.08, slice_3=0.095, slice_4=0.11, slice_5=0.125, slice_6=0.14, slice_7=0.155, slice_8=0.17, slice_9=0.185, slice_10=0.2, slice_11=0.215;


  TH1D *hist_sig_iso = new TH1D ("hist_sig_iso", "hist_sig_iso", nbins, -3.7, 3.7);
  TH1D *hist_bkg_iso = new TH1D ("hist_bkg_iso", "hist_bkg_iso", nbins, -3.7, 3.7);
  TH1D *hist_bkg_excl_jg_iso = new TH1D ("hist_bkg_excl_jg_iso", "hist_bkg_excl_jg_iso", nbins, -3.7, 3.7);
  TH1D *hist_data_iso = new TH1D ("hist_data_iso", "hist_data_iso", nbins, -3.7, 3.7);


  TH1D *hist_CR1_sig_1 = new TH1D ("hist_CR1_sig_1", "hist_CR1_sig_1", nbins, -3.7, 3.7);
  TH1D *hist_CR1_sig_2 = new TH1D ("hist_CR1_sig_2", "hist_CR1_sig_2", nbins, -3.7, 3.7);
  TH1D *hist_CR1_sig_3 = new TH1D ("hist_CR1_sig_3", "hist_CR1_sig_3", nbins, -3.7, 3.7);
  TH1D *hist_CR1_sig_4 = new TH1D ("hist_CR1_sig_4", "hist_CR1_sig_4", nbins, -3.7, 3.7);
  TH1D *hist_CR1_sig_5 = new TH1D ("hist_CR1_sig_5", "hist_CR1_sig_5", nbins, -3.7, 3.7);
  TH1D *hist_CR1_sig_6 = new TH1D ("hist_CR1_sig_6", "hist_CR1_sig_6", nbins, -3.7, 3.7);
  TH1D *hist_CR1_sig_7 = new TH1D ("hist_CR1_sig_7", "hist_CR1_sig_7", nbins, -3.7, 3.7);
  TH1D *hist_CR1_sig_8 = new TH1D ("hist_CR1_sig_8", "hist_CR1_sig_8", nbins, -3.7, 3.7);
  TH1D *hist_CR1_sig_9 = new TH1D ("hist_CR1_sig_9", "hist_CR1_sig_9", nbins, -3.7, 3.7);
  TH1D *hist_CR1_sig_10 = new TH1D ("hist_CR1_sig_10", "hist_CR1_sig_10", nbins, -3.7, 3.7);


  TH1D *hist_CR2_sig_1 = new TH1D ("hist_CR2_sig_1", "hist_CR2_sig_1", nbins, -3.7, 3.7);
  TH1D *hist_CR2_sig_2 = new TH1D ("hist_CR2_sig_2", "hist_CR2_sig_2", nbins, -3.7, 3.7);
  TH1D *hist_CR2_sig_3 = new TH1D ("hist_CR2_sig_3", "hist_CR2_sig_3", nbins, -3.7, 3.7);
  TH1D *hist_CR2_sig_4 = new TH1D ("hist_CR2_sig_4", "hist_CR2_sig_4", nbins, -3.7, 3.7);
  TH1D *hist_CR2_sig_5 = new TH1D ("hist_CR2_sig_5", "hist_CR2_sig_5", nbins, -3.7, 3.7);
  TH1D *hist_CR2_sig_6 = new TH1D ("hist_CR2_sig_6", "hist_CR2_sig_6", nbins, -3.7, 3.7);
  TH1D *hist_CR2_sig_7 = new TH1D ("hist_CR2_sig_7", "hist_CR2_sig_7", nbins, -3.7, 3.7);
  TH1D *hist_CR2_sig_8 = new TH1D ("hist_CR2_sig_8", "hist_CR2_sig_8", nbins, -3.7, 3.7);
  TH1D *hist_CR2_sig_9 = new TH1D ("hist_CR2_sig_9", "hist_CR2_sig_9", nbins, -3.7, 3.7);
  TH1D *hist_CR2_sig_10 = new TH1D ("hist_CR2_sig_10", "hist_CR2_sig_10", nbins, -3.7, 3.7);

  TH1D *hist_non_t_sig_1 = new TH1D ("hist_non_t_sig_1", "hist_non_t_sig_1", nbins, -3.7, 3.7);
  TH1D *hist_non_t_sig_2 = new TH1D ("hist_non_t_sig_2", "hist_non_t_sig_2", nbins, -3.7, 3.7);
  TH1D *hist_non_t_sig_3 = new TH1D ("hist_non_t_sig_3", "hist_non_t_sig_3", nbins, -3.7, 3.7);
  TH1D *hist_non_t_sig_4 = new TH1D ("hist_non_t_sig_4", "hist_non_t_sig_4", nbins, -3.7, 3.7);
  TH1D *hist_non_t_sig_5 = new TH1D ("hist_non_t_sig_5", "hist_non_t_sig_5", nbins, -3.7, 3.7);
  TH1D *hist_non_t_sig_6 = new TH1D ("hist_non_t_sig_6", "hist_non_t_sig_6", nbins, -3.7, 3.7);
  TH1D *hist_non_t_sig_7 = new TH1D ("hist_non_t_sig_7", "hist_non_t_sig_7", nbins, -3.7, 3.7);
  TH1D *hist_non_t_sig_8 = new TH1D ("hist_non_t_sig_8", "hist_non_t_sig_8", nbins, -3.7, 3.7);
  TH1D *hist_non_t_sig_9 = new TH1D ("hist_non_t_sig_9", "hist_non_t_sig_9", nbins, -3.7, 3.7);
  TH1D *hist_non_t_sig_10 = new TH1D ("hist_non_t_sig_10", "hist_non_t_sig_10", nbins, -3.7, 3.7);

  TH1D *hist_CR1_bkg_1 = new TH1D ("hist_CR1_bkg_1", "hist_CR1_bkg_1", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_2 = new TH1D ("hist_CR1_bkg_2", "hist_CR1_bkg_2", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_3 = new TH1D ("hist_CR1_bkg_3", "hist_CR1_bkg_3", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_4 = new TH1D ("hist_CR1_bkg_4", "hist_CR1_bkg_4", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_5 = new TH1D ("hist_CR1_bkg_5", "hist_CR1_bkg_5", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_6 = new TH1D ("hist_CR1_bkg_6", "hist_CR1_bkg_6", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_7 = new TH1D ("hist_CR1_bkg_7", "hist_CR1_bkg_7", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_8 = new TH1D ("hist_CR1_bkg_8", "hist_CR1_bkg_8", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_9 = new TH1D ("hist_CR1_bkg_9", "hist_CR1_bkg_9", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_10 = new TH1D ("hist_CR1_bkg_10", "hist_CR1_bkg_10", nbins, -3.7, 3.7);



  TH1D *hist_CR2_bkg_1 = new TH1D ("hist_CR2_bkg_1", "hist_CR2_bkg_1", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_2 = new TH1D ("hist_CR2_bkg_2", "hist_CR2_bkg_2", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_3 = new TH1D ("hist_CR2_bkg_3", "hist_CR2_bkg_3", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_4 = new TH1D ("hist_CR2_bkg_4", "hist_CR2_bkg_4", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_5 = new TH1D ("hist_CR2_bkg_5", "hist_CR2_bkg_5", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_6 = new TH1D ("hist_CR2_bkg_6", "hist_CR2_bkg_6", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_7 = new TH1D ("hist_CR2_bkg_7", "hist_CR2_bkg_7", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_8 = new TH1D ("hist_CR2_bkg_8", "hist_CR2_bkg_8", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_9 = new TH1D ("hist_CR2_bkg_9", "hist_CR2_bkg_9", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_10 = new TH1D ("hist_CR2_bkg_10", "hist_CR2_bkg_10", nbins, -3.7, 3.7);

  TH1D *hist_non_t_bkg_1 = new TH1D ("hist_non_t_bkg_1", "hist_non_t_bkg_1", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_2 = new TH1D ("hist_non_t_bkg_2", "hist_non_t_bkg_2", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_3 = new TH1D ("hist_non_t_bkg_3", "hist_non_t_bkg_3", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_4 = new TH1D ("hist_non_t_bkg_4", "hist_non_t_bkg_4", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_5 = new TH1D ("hist_non_t_bkg_5", "hist_non_t_bkg_5", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_6 = new TH1D ("hist_non_t_bkg_6", "hist_non_t_bkg_6", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_7 = new TH1D ("hist_non_t_bkg_7", "hist_non_t_bkg_7", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_8 = new TH1D ("hist_non_t_bkg_8", "hist_non_t_bkg_8", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_9 = new TH1D ("hist_non_t_bkg_9", "hist_non_t_bkg_9", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_10 = new TH1D ("hist_non_t_bkg_10", "hist_non_t_bkg_10", nbins, -3.7, 3.7);


  TH1D *hist_CR1_bkg_excl_jg_1 = new TH1D ("hist_CR1_bkg_excl_jg_1", "hist_CR1_bkg_excl_jg_1", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_excl_jg_2 = new TH1D ("hist_CR1_bkg_excl_jg_2", "hist_CR1_bkg_excl_jg_2", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_excl_jg_3 = new TH1D ("hist_CR1_bkg_excl_jg_3", "hist_CR1_bkg_excl_jg_3", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_excl_jg_4 = new TH1D ("hist_CR1_bkg_excl_jg_4", "hist_CR1_bkg_excl_jg_4", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_excl_jg_5 = new TH1D ("hist_CR1_bkg_excl_jg_5", "hist_CR1_bkg_excl_jg_5", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_excl_jg_6 = new TH1D ("hist_CR1_bkg_excl_jg_6", "hist_CR1_bkg_excl_jg_6", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_excl_jg_7 = new TH1D ("hist_CR1_bkg_excl_jg_7", "hist_CR1_bkg_excl_jg_7", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_excl_jg_8 = new TH1D ("hist_CR1_bkg_excl_jg_8", "hist_CR1_bkg_excl_jg_8", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_excl_jg_9 = new TH1D ("hist_CR1_bkg_excl_jg_9", "hist_CR1_bkg_excl_jg_9", nbins, -3.7, 3.7);
  TH1D *hist_CR1_bkg_excl_jg_10 = new TH1D ("hist_CR1_bkg_excl_jg_10", "hist_CR1_bkg_excl_jg_10", nbins, -3.7, 3.7);



  TH1D *hist_CR2_bkg_excl_jg_1 = new TH1D ("hist_CR2_bkg_excl_jg_1", "hist_CR2_bkg_excl_jg_1", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_excl_jg_2 = new TH1D ("hist_CR2_bkg_excl_jg_2", "hist_CR2_bkg_excl_jg_2", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_excl_jg_3 = new TH1D ("hist_CR2_bkg_excl_jg_3", "hist_CR2_bkg_excl_jg_3", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_excl_jg_4 = new TH1D ("hist_CR2_bkg_excl_jg_4", "hist_CR2_bkg_excl_jg_4", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_excl_jg_5 = new TH1D ("hist_CR2_bkg_excl_jg_5", "hist_CR2_bkg_excl_jg_5", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_excl_jg_6 = new TH1D ("hist_CR2_bkg_excl_jg_6", "hist_CR2_bkg_excl_jg_6", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_excl_jg_7 = new TH1D ("hist_CR2_bkg_excl_jg_7", "hist_CR2_bkg_excl_jg_7", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_excl_jg_8 = new TH1D ("hist_CR2_bkg_excl_jg_8", "hist_CR2_bkg_excl_jg_8", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_excl_jg_9 = new TH1D ("hist_CR2_bkg_excl_jg_9", "hist_CR2_bkg_excl_jg_9", nbins, -3.7, 3.7);
  TH1D *hist_CR2_bkg_excl_jg_10 = new TH1D ("hist_CR2_bkg_excl_jg_10", "hist_CR2_bkg_excl_jg_10", nbins, -3.7, 3.7);


  TH1D *hist_non_t_bkg_excl_jg_1 = new TH1D ("hist_non_t_bkg_excl_jg_1", "hist_non_t_bkg_excl_jg_1", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_excl_jg_2 = new TH1D ("hist_non_t_bkg_excl_jg_2", "hist_non_t_bkg_excl_jg_2", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_excl_jg_3 = new TH1D ("hist_non_t_bkg_excl_jg_3", "hist_non_t_bkg_excl_jg_3", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_excl_jg_4 = new TH1D ("hist_non_t_bkg_excl_jg_4", "hist_non_t_bkg_excl_jg_4", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_excl_jg_5 = new TH1D ("hist_non_t_bkg_excl_jg_5", "hist_non_t_bkg_excl_jg_5", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_excl_jg_6 = new TH1D ("hist_non_t_bkg_excl_jg_6", "hist_non_t_bkg_excl_jg_6", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_excl_jg_7 = new TH1D ("hist_non_t_bkg_excl_jg_7", "hist_non_t_bkg_excl_jg_7", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_excl_jg_8 = new TH1D ("hist_non_t_bkg_excl_jg_8", "hist_non_t_bkg_excl_jg_8", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_excl_jg_9 = new TH1D ("hist_non_t_bkg_excl_jg_9", "hist_non_t_bkg_excl_jg_9", nbins, -3.7, 3.7);
  TH1D *hist_non_t_bkg_excl_jg_10 = new TH1D ("hist_non_t_bkg_excl_jg_10", "hist_non_t_bkg_excl_jg_10", nbins, -3.7, 3.7);


  TH1D *hist_CR1_data_1 = new TH1D ("hist_CR1_data_1", "hist_CR1_data_1", nbins, -3.7, 3.7);
  TH1D *hist_CR1_data_2 = new TH1D ("hist_CR1_data_2", "hist_CR1_data_2", nbins, -3.7, 3.7);
  TH1D *hist_CR1_data_3 = new TH1D ("hist_CR1_data_3", "hist_CR1_data_3", nbins, -3.7, 3.7);
  TH1D *hist_CR1_data_4 = new TH1D ("hist_CR1_data_4", "hist_CR1_data_4", nbins, -3.7, 3.7);
  TH1D *hist_CR1_data_5 = new TH1D ("hist_CR1_data_5", "hist_CR1_data_5", nbins, -3.7, 3.7);
  TH1D *hist_CR1_data_6 = new TH1D ("hist_CR1_data_6", "hist_CR1_data_6", nbins, -3.7, 3.7);
  TH1D *hist_CR1_data_7 = new TH1D ("hist_CR1_data_7", "hist_CR1_data_7", nbins, -3.7, 3.7);
  TH1D *hist_CR1_data_8 = new TH1D ("hist_CR1_data_8", "hist_CR1_data_8", nbins, -3.7, 3.7);
  TH1D *hist_CR1_data_9 = new TH1D ("hist_CR1_data_9", "hist_CR1_data_9", nbins, -3.7, 3.7);
  TH1D *hist_CR1_data_10 = new TH1D ("hist_CR1_data_10", "hist_CR1_data_10", nbins, -3.7, 3.7);


  TH1D *hist_CR2_data_1 = new TH1D ("hist_CR2_data_1", "hist_CR2_data_1", nbins, -3.7, 3.7);
  TH1D *hist_CR2_data_2 = new TH1D ("hist_CR2_data_2", "hist_CR2_data_2", nbins, -3.7, 3.7);
  TH1D *hist_CR2_data_3 = new TH1D ("hist_CR2_data_3", "hist_CR2_data_3", nbins, -3.7, 3.7);
  TH1D *hist_CR2_data_4 = new TH1D ("hist_CR2_data_4", "hist_CR2_data_4", nbins, -3.7, 3.7);
  TH1D *hist_CR2_data_5 = new TH1D ("hist_CR2_data_5", "hist_CR2_data_5", nbins, -3.7, 3.7);
  TH1D *hist_CR2_data_6 = new TH1D ("hist_CR2_data_6", "hist_CR2_data_6", nbins, -3.7, 3.7);
  TH1D *hist_CR2_data_7 = new TH1D ("hist_CR2_data_7", "hist_CR2_data_7", nbins, -3.7, 3.7);
  TH1D *hist_CR2_data_8 = new TH1D ("hist_CR2_data_8", "hist_CR2_data_8", nbins, -3.7, 3.7);
  TH1D *hist_CR2_data_9 = new TH1D ("hist_CR2_data_9", "hist_CR2_data_9", nbins, -3.7, 3.7);
  TH1D *hist_CR2_data_10 = new TH1D ("hist_CR2_data_10", "hist_CR2_data_10", nbins, -3.7, 3.7);


  const char *path = "/home/valerian/programs/atom_progs/matrix_method/";
    const char *nabor[] = {"Zg.root","Zj.root","GammaJet.root"};

    for (int l = 0; l <=2; l++) {
    char *Nabor = new char[strlen(path) + strlen(nabor[l]) + 1];
    strcpy(Nabor, path);
    strcat(Nabor, nabor[l]);

          if (l==0){
                  std::cout << "/* path */" << Nabor <<  '\n';
                  TFile *signal = new TFile(Nabor, "READ");
                  TTree *tree_signal = (TTree*)signal->Get("output_tree");

                  tree_signal->SetBranchAddress("IsolationVar", &IsolationVar_r);
                  tree_signal->SetBranchAddress("MissingMET", &MissingMET_r);
                  tree_signal->SetBranchAddress("MissingPhi", &MissingPhi_r);
                  tree_signal->SetBranchAddress("PhotonEta", &PhotonEta_r);
                  tree_signal->SetBranchAddress("PhotonID", &PhotonID_r);
                  tree_signal->SetBranchAddress("PhotonPhi",&PhotonPhi_r);
                  tree_signal->SetBranchAddress("PhotonPt",&PhotonPt_r);
                  tree_signal->SetBranchAddress("Weight",&Weight_r);

                  int Num_tree_signal = (int)tree_signal->GetEntries();
                  for (int i=0; i<Num_tree_signal; i++){
                          tree_signal->GetEntry(i);

                          if (IsolationVar_r > slice_1 && IsolationVar_r < slice_2 && PhotonID_r == 0) hist_CR1_sig_1->Fill(PhotonPhi_r, Weight_r); //неизолированная область с жестким фотоном
                          if (IsolationVar_r > slice_2 && IsolationVar_r < slice_3 && PhotonID_r == 0) hist_CR1_sig_2->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_3 && IsolationVar_r < slice_4 && PhotonID_r == 0) hist_CR1_sig_3->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_4 && IsolationVar_r < slice_5 && PhotonID_r == 0) hist_CR1_sig_4->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_5 && IsolationVar_r < slice_6 && PhotonID_r == 0) hist_CR1_sig_5->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_6 && IsolationVar_r < slice_7 && PhotonID_r == 0) hist_CR1_sig_6->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_7 && IsolationVar_r < slice_8 && PhotonID_r == 0) hist_CR1_sig_7->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_8 && IsolationVar_r < slice_9 && PhotonID_r == 0) hist_CR1_sig_8->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_9 && IsolationVar_r < slice_10 && PhotonID_r == 0) hist_CR1_sig_9->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_10 && IsolationVar_r < slice_11 && PhotonID_r == 0) hist_CR1_sig_10->Fill(PhotonPhi_r, Weight_r);


                          if (IsolationVar_r > slice_1 && IsolationVar_r < slice_2 && PhotonID_r != 0) hist_non_t_sig_1->Fill(PhotonPhi_r, Weight_r); //неизолированная область с жестким фотоном
                          if (IsolationVar_r > slice_2 && IsolationVar_r < slice_3 && PhotonID_r != 0) hist_non_t_sig_2->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_3 && IsolationVar_r < slice_4 && PhotonID_r != 0) hist_non_t_sig_3->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_4 && IsolationVar_r < slice_5 && PhotonID_r != 0) hist_non_t_sig_4->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_5 && IsolationVar_r < slice_6 && PhotonID_r != 0) hist_non_t_sig_5->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_6 && IsolationVar_r < slice_7 && PhotonID_r != 0) hist_non_t_sig_6->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_7 && IsolationVar_r < slice_8 && PhotonID_r != 0) hist_non_t_sig_7->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_8 && IsolationVar_r < slice_9 && PhotonID_r != 0) hist_non_t_sig_8->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_9 && IsolationVar_r < slice_10 && PhotonID_r != 0) hist_non_t_sig_9->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_10 && IsolationVar_r < slice_11 && PhotonID_r != 0) hist_non_t_sig_10->Fill(PhotonPhi_r, Weight_r);



                          if (IsolationVar_r > slice_1 && IsolationVar_r < slice_2) hist_CR2_sig_1->Fill(PhotonPhi_r, Weight_r);   //неизолированная область с мягким фотоном
                          if (IsolationVar_r > slice_2 && IsolationVar_r < slice_3) hist_CR2_sig_2->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_3 && IsolationVar_r < slice_4) hist_CR2_sig_3->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_4 && IsolationVar_r < slice_5) hist_CR2_sig_4->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_5 && IsolationVar_r < slice_6) hist_CR2_sig_5->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_6 && IsolationVar_r < slice_7) hist_CR2_sig_6->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_7 && IsolationVar_r < slice_8) hist_CR2_sig_7->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_8 && IsolationVar_r < slice_9) hist_CR2_sig_8->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_9 && IsolationVar_r < slice_10) hist_CR2_sig_9->Fill(PhotonPhi_r, Weight_r);
                          if (IsolationVar_r > slice_10 && IsolationVar_r < slice_11) hist_CR2_sig_10->Fill(PhotonPhi_r, Weight_r);

                          if (PhotonID_r == 0 && IsolationVar_r < 0.065) hist_sig_iso->Fill(PhotonPhi_r, Weight_r);
                          }
                  }


                 else if (l == 1){

                    std::cout << "/* path */" << Nabor <<  '\n';
                    TFile *bkg = new TFile(Nabor, "READ");
                    TTree *tree_bkg = (TTree*)bkg->Get("output_tree");

                    tree_bkg->SetBranchAddress("IsolationVar", &IsolationVar_f);
                    tree_bkg->SetBranchAddress("MissingMET", &MissingMET_f);
                    tree_bkg->SetBranchAddress("MissingPhi", &MissingPhi_f);
                    tree_bkg->SetBranchAddress("PhotonEta", &PhotonEta_f);
                    tree_bkg->SetBranchAddress("PhotonID", &PhotonID_f);
                    tree_bkg->SetBranchAddress("PhotonPhi",&PhotonPhi_f);
                    tree_bkg->SetBranchAddress("PhotonPt",&PhotonPt_f);
                    tree_bkg->SetBranchAddress("Weight",&Weight_f);

                    int Num_tree_bkg = (int)tree_bkg->GetEntries();
                    for (int i=0; i<Num_tree_bkg; i++){
                            tree_bkg->GetEntry(i);
                            if (IsolationVar_f > slice_1 && IsolationVar_f < slice_2 && PhotonID_f == 0) hist_CR1_bkg_1->Fill(PhotonPhi_f, Weight_f); //неизолированная область с жестким фотоном
                            if (IsolationVar_f > slice_2 && IsolationVar_f < slice_3 && PhotonID_f == 0) hist_CR1_bkg_2->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_3 && IsolationVar_f < slice_4 && PhotonID_f == 0) hist_CR1_bkg_3->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_4 && IsolationVar_f < slice_5 && PhotonID_f == 0) hist_CR1_bkg_4->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_5 && IsolationVar_f < slice_6 && PhotonID_f == 0) hist_CR1_bkg_5->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_6 && IsolationVar_f < slice_7 && PhotonID_f == 0) hist_CR1_bkg_6->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_7 && IsolationVar_f < slice_8 && PhotonID_f == 0) hist_CR1_bkg_7->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_8 && IsolationVar_f < slice_9 && PhotonID_f == 0) hist_CR1_bkg_8->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_9 && IsolationVar_f < slice_10 && PhotonID_f == 0) hist_CR1_bkg_9->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_10 && IsolationVar_f < slice_11 && PhotonID_f == 0) hist_CR1_bkg_10->Fill(PhotonPhi_f, Weight_f);


                            if (IsolationVar_f > slice_1 && IsolationVar_f < slice_2 && PhotonID_f != 0) hist_non_t_bkg_1->Fill(PhotonPhi_f, Weight_f); //неизолированная область с жестким фотоном
                            if (IsolationVar_f > slice_2 && IsolationVar_f < slice_3 && PhotonID_f != 0) hist_non_t_bkg_2->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_3 && IsolationVar_f < slice_4 && PhotonID_f != 0) hist_non_t_bkg_3->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_4 && IsolationVar_f < slice_5 && PhotonID_f != 0) hist_non_t_bkg_4->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_5 && IsolationVar_f < slice_6 && PhotonID_f != 0) hist_non_t_bkg_5->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_6 && IsolationVar_f < slice_7 && PhotonID_f != 0) hist_non_t_bkg_6->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_7 && IsolationVar_f < slice_8 && PhotonID_f != 0) hist_non_t_bkg_7->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_8 && IsolationVar_f < slice_9 && PhotonID_f != 0) hist_non_t_bkg_8->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_9 && IsolationVar_f < slice_10 && PhotonID_f != 0) hist_non_t_bkg_9->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_10 && IsolationVar_f < slice_11 && PhotonID_f != 0) hist_non_t_bkg_10->Fill(PhotonPhi_f, Weight_f);



                            if (IsolationVar_f > slice_1 && IsolationVar_f < slice_2) hist_CR2_bkg_1->Fill(PhotonPhi_f, Weight_f);   //неизолированная область с мягким фотоном
                            if (IsolationVar_f > slice_2 && IsolationVar_f < slice_3) hist_CR2_bkg_2->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_3 && IsolationVar_f < slice_4) hist_CR2_bkg_3->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_4 && IsolationVar_f < slice_5) hist_CR2_bkg_4->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_5 && IsolationVar_f < slice_6) hist_CR2_bkg_5->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_6 && IsolationVar_f < slice_7) hist_CR2_bkg_6->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_7 && IsolationVar_f < slice_8) hist_CR2_bkg_7->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_8 && IsolationVar_f < slice_9) hist_CR2_bkg_8->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_9 && IsolationVar_f < slice_10) hist_CR2_bkg_9->Fill(PhotonPhi_f, Weight_f);
                            if (IsolationVar_f > slice_10 && IsolationVar_f < slice_11) hist_CR2_bkg_10->Fill(PhotonPhi_f, Weight_f);

                            if (PhotonID_f == 0 && IsolationVar_f < 0.065) hist_bkg_iso->Fill(PhotonPhi_f, Weight_f);

                            }

                          }

              else if (l == 2){
                std::cout << "/* path */" << Nabor <<  '\n';
                TFile *bkg_excl_jg = new TFile(Nabor, "READ");
                TTree *tree_bkg_excl_jg = (TTree*)bkg_excl_jg->Get("output_tree");

                tree_bkg_excl_jg->SetBranchAddress("IsolationVar", &IsolationVar);
                tree_bkg_excl_jg->SetBranchAddress("MissingMET", &MissingMET);
                tree_bkg_excl_jg->SetBranchAddress("MissingPhi", &MissingPhi);
                tree_bkg_excl_jg->SetBranchAddress("PhotonEta", &PhotonEta);
                tree_bkg_excl_jg->SetBranchAddress("PhotonID", &PhotonID);
                tree_bkg_excl_jg->SetBranchAddress("PhotonPhi",&PhotonPhi);
                tree_bkg_excl_jg->SetBranchAddress("PhotonPt",&PhotonPt);
                tree_bkg_excl_jg->SetBranchAddress("Weight",&Weight);

                int Num_tree_bkg_excl_jg = (int)tree_bkg_excl_jg->GetEntries();
                for (int i=0; i<Num_tree_bkg_excl_jg; i++){
                        tree_bkg_excl_jg->GetEntry(i);
                        if (IsolationVar > slice_1 && IsolationVar < slice_2 && PhotonID == 0) hist_CR1_bkg_excl_jg_1->Fill(PhotonPhi, Weight); //неизолированная область с жестким фотоном
                        if (IsolationVar > slice_2 && IsolationVar < slice_3 && PhotonID == 0) hist_CR1_bkg_excl_jg_2->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_3 && IsolationVar < slice_4 && PhotonID == 0) hist_CR1_bkg_excl_jg_3->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_4 && IsolationVar < slice_5 && PhotonID == 0) hist_CR1_bkg_excl_jg_4->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_5 && IsolationVar < slice_6 && PhotonID == 0) hist_CR1_bkg_excl_jg_5->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_6 && IsolationVar < slice_7 && PhotonID == 0) hist_CR1_bkg_excl_jg_6->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_7 && IsolationVar < slice_8 && PhotonID == 0) hist_CR1_bkg_excl_jg_7->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_8 && IsolationVar < slice_9 && PhotonID == 0) hist_CR1_bkg_excl_jg_8->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_9 && IsolationVar < slice_10 && PhotonID == 0) hist_CR1_bkg_excl_jg_9->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_10 && IsolationVar < slice_11 && PhotonID == 0) hist_CR1_bkg_excl_jg_10->Fill(PhotonPhi, Weight);


                        if (IsolationVar > slice_1 && IsolationVar < slice_2 && PhotonID != 0) hist_non_t_bkg_excl_jg_1->Fill(PhotonPhi, Weight); //неизолированная область с жестким фотоном
                        if (IsolationVar > slice_2 && IsolationVar < slice_3 && PhotonID != 0) hist_non_t_bkg_excl_jg_2->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_3 && IsolationVar < slice_4 && PhotonID != 0) hist_non_t_bkg_excl_jg_3->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_4 && IsolationVar < slice_5 && PhotonID != 0) hist_non_t_bkg_excl_jg_4->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_5 && IsolationVar < slice_6 && PhotonID != 0) hist_non_t_bkg_excl_jg_5->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_6 && IsolationVar < slice_7 && PhotonID != 0) hist_non_t_bkg_excl_jg_6->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_7 && IsolationVar < slice_8 && PhotonID != 0) hist_non_t_bkg_excl_jg_7->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_8 && IsolationVar < slice_9 && PhotonID != 0) hist_non_t_bkg_excl_jg_8->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_9 && IsolationVar < slice_10 && PhotonID != 0) hist_non_t_bkg_excl_jg_9->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_10 && IsolationVar < slice_11 && PhotonID != 0) hist_non_t_bkg_excl_jg_10->Fill(PhotonPhi, Weight);


                        if (IsolationVar > slice_1 && IsolationVar < slice_2) hist_CR2_bkg_excl_jg_1->Fill(PhotonPhi, Weight);   //неизолированная область с мягким фотоном
                        if (IsolationVar > slice_2 && IsolationVar < slice_3) hist_CR2_bkg_excl_jg_2->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_3 && IsolationVar < slice_4) hist_CR2_bkg_excl_jg_3->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_4 && IsolationVar < slice_5) hist_CR2_bkg_excl_jg_4->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_5 && IsolationVar < slice_6) hist_CR2_bkg_excl_jg_5->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_6 && IsolationVar < slice_7) hist_CR2_bkg_excl_jg_6->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_7 && IsolationVar < slice_8) hist_CR2_bkg_excl_jg_7->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_8 && IsolationVar < slice_9) hist_CR2_bkg_excl_jg_8->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_9 && IsolationVar < slice_10) hist_CR2_bkg_excl_jg_9->Fill(PhotonPhi, Weight);
                        if (IsolationVar > slice_10 && IsolationVar < slice_11) hist_CR2_bkg_excl_jg_10->Fill(PhotonPhi, Weight);

                        if (PhotonID == 0 && IsolationVar < 0.065) hist_bkg_excl_jg_iso->Fill(PhotonPhi, Weight);
                        }
                  }
            }

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


                    Double_t r_1=N_CR1_sig_1/N_CR2_sig_1, r_2=N_CR1_sig_2/N_CR2_sig_2, r_3=N_CR1_sig_3/N_CR2_sig_3,r_4=N_CR1_sig_4/N_CR2_sig_4, r_5=N_CR1_sig_5/N_CR2_sig_5, r_6=N_CR1_sig_6/N_CR2_sig_6, r_7=N_CR1_sig_7/N_CR2_sig_7, r_8=N_CR1_sig_8/N_CR2_sig_8, r_9=N_CR1_sig_9/N_CR2_sig_9, r_10=N_CR1_sig_10/N_CR2_sig_10, r_11=N_CR1_sig_11/N_CR2_sig_11,r_12=N_CR1_sig_12/N_CR2_sig_12, r_13=N_CR1_sig_13/N_CR2_sig_13, r_14=N_CR1_sig_14/N_CR2_sig_14, r_15=N_CR1_sig_15/N_CR2_sig_15;
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


                    std::cout << '\n';


                    // N_bkg_iso=hist_bkg_iso->IntegralAndError(1, nbins, error_bkg_iso, "");
                    // std::cout << " N_bkg_iso=" << N_bkg_iso << " +- " << error_bkg_iso  << '\n';
                    // std::cout << "" << '\n';

                    N_CR1_bkg_1=hist_CR1_bkg_1->IntegralAndError(1, nbins, error_CR1_bkg_1, "");
                    N_CR1_bkg_2=hist_CR1_bkg_2->IntegralAndError(1, nbins, error_CR1_bkg_2, "");
                    N_CR1_bkg_3=hist_CR1_bkg_3->IntegralAndError(1, nbins, error_CR1_bkg_3, "");
                    N_CR1_bkg_4=hist_CR1_bkg_4->IntegralAndError(1, nbins, error_CR1_bkg_4, "");
                    N_CR1_bkg_5=hist_CR1_bkg_5->IntegralAndError(1, nbins, error_CR1_bkg_5, "");
                    N_CR1_bkg_6=hist_CR1_bkg_6->IntegralAndError(1, nbins, error_CR1_bkg_6, "");
                    N_CR1_bkg_7=hist_CR1_bkg_7->IntegralAndError(1, nbins, error_CR1_bkg_7, "");
                    N_CR1_bkg_8=hist_CR1_bkg_8->IntegralAndError(1, nbins, error_CR1_bkg_8, "");
                    N_CR1_bkg_9=hist_CR1_bkg_9->IntegralAndError(1, nbins, error_CR1_bkg_9, "");
                    N_CR1_bkg_10=hist_CR1_bkg_10->IntegralAndError(1, nbins, error_CR1_bkg_10, "");


                    N_CR2_bkg_1=hist_CR2_bkg_1->IntegralAndError(1, nbins, error_CR2_bkg_1, "");
                    N_CR2_bkg_2=hist_CR2_bkg_2->IntegralAndError(1, nbins, error_CR2_bkg_2, "");
                    N_CR2_bkg_3=hist_CR2_bkg_3->IntegralAndError(1, nbins, error_CR2_bkg_3, "");
                    N_CR2_bkg_4=hist_CR2_bkg_4->IntegralAndError(1, nbins, error_CR2_bkg_4, "");
                    N_CR2_bkg_5=hist_CR2_bkg_5->IntegralAndError(1, nbins, error_CR2_bkg_5, "");
                    N_CR2_bkg_6=hist_CR2_bkg_6->IntegralAndError(1, nbins, error_CR2_bkg_6, "");
                    N_CR2_bkg_7=hist_CR2_bkg_7->IntegralAndError(1, nbins, error_CR2_bkg_7, "");
                    N_CR2_bkg_8=hist_CR2_bkg_8->IntegralAndError(1, nbins, error_CR2_bkg_8, "");
                    N_CR2_bkg_9=hist_CR2_bkg_9->IntegralAndError(1, nbins, error_CR2_bkg_9, "");
                    N_CR2_bkg_10=hist_CR2_bkg_10->IntegralAndError(1, nbins, error_CR2_bkg_10, "");



                    Double_t error_f_1 =sqrt(pow(error_CR1_bkg_1/N_CR2_bkg_1,2)+pow(N_CR1_bkg_1*error_CR2_bkg_1/pow(N_CR2_bkg_1,2),2));
                    Double_t error_f_2 =sqrt(pow(error_CR1_bkg_2/N_CR2_bkg_2,2)+pow(N_CR1_bkg_2*error_CR2_bkg_2/pow(N_CR2_bkg_2,2),2));
                    Double_t error_f_3 =sqrt(pow(error_CR1_bkg_3/N_CR2_bkg_3,2)+pow(N_CR1_bkg_3*error_CR2_bkg_3/pow(N_CR2_bkg_3,2),2));
                    Double_t error_f_4 =sqrt(pow(error_CR1_bkg_4/N_CR2_bkg_4,2)+pow(N_CR1_bkg_4*error_CR2_bkg_4/pow(N_CR2_bkg_4,2),2));
                    Double_t error_f_5 =sqrt(pow(error_CR1_bkg_5/N_CR2_bkg_5,2)+pow(N_CR1_bkg_5*error_CR2_bkg_5/pow(N_CR2_bkg_5,2),2));
                    Double_t error_f_6 =sqrt(pow(error_CR1_bkg_6/N_CR2_bkg_6,2)+pow(N_CR1_bkg_6*error_CR2_bkg_6/pow(N_CR2_bkg_6,2),2));
                    Double_t error_f_7 =sqrt(pow(error_CR1_bkg_7/N_CR2_bkg_7,2)+pow(N_CR1_bkg_7*error_CR2_bkg_7/pow(N_CR2_bkg_7,2),2));
                    Double_t error_f_8 =sqrt(pow(error_CR1_bkg_8/N_CR2_bkg_8,2)+pow(N_CR1_bkg_8*error_CR2_bkg_8/pow(N_CR2_bkg_8,2),2));
                    Double_t error_f_9 =sqrt(pow(error_CR1_bkg_9/N_CR2_bkg_9,2)+pow(N_CR1_bkg_9*error_CR2_bkg_9/pow(N_CR2_bkg_9,2),2));
                    Double_t error_f_10 =sqrt(pow(error_CR1_bkg_10/N_CR2_bkg_10,2)+pow(N_CR1_bkg_10*error_CR2_bkg_10/pow(N_CR2_bkg_10,2),2));

                    Double_t f_1=N_CR1_bkg_1/N_CR2_bkg_1, f_2=N_CR1_bkg_2/N_CR2_bkg_2, f_3=N_CR1_bkg_3/N_CR2_bkg_3, f_4=N_CR1_bkg_4/N_CR2_bkg_4, f_5=N_CR1_bkg_5/N_CR2_bkg_5, f_6=N_CR1_bkg_6/N_CR2_bkg_6, f_7=N_CR1_bkg_7/N_CR2_bkg_7, f_8=N_CR1_bkg_8/N_CR2_bkg_8, f_9=N_CR1_bkg_9/N_CR2_bkg_9, f_10=N_CR1_bkg_10/N_CR2_bkg_10, f_11=N_CR1_bkg_11/N_CR2_bkg_11, f_12=N_CR1_bkg_12/N_CR2_bkg_12,f_13=N_CR1_bkg_13/N_CR2_bkg_13, f_14=N_CR1_bkg_14/N_CR2_bkg_14, f_15=N_CR1_bkg_15/N_CR2_bkg_15;
                    std::cout << "slice 1 " << " f_1= " << N_CR1_bkg_1/N_CR2_bkg_1 << " +- " << error_f_1 << "    N_CR1_bkg_1=" << N_CR1_bkg_1 << " +- " << error_CR1_bkg_1 << "    N_CR2_bkg_1=" << N_CR2_bkg_1 << " +- " << error_CR2_bkg_1 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 2 " << " f_2= " << N_CR1_bkg_2/N_CR2_bkg_2 << " +- " << error_f_2 << "    N_CR1_bkg_2=" << N_CR1_bkg_2 << " +- " << error_CR1_bkg_2 << "    N_CR2_bkg_2=" << N_CR2_bkg_2 << " +- " << error_CR2_bkg_2 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 3 " << " f_3= " << N_CR1_bkg_3/N_CR2_bkg_3 << " +- " << error_f_3 << "    N_CR1_bkg_3=" << N_CR1_bkg_3 << " +- " << error_CR1_bkg_3 << "    N_CR2_bkg_3_bkg=" << N_CR2_bkg_3<< " +- " << error_CR2_bkg_3 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 4 " << " f_4= " << N_CR1_bkg_4/N_CR2_bkg_4 << " +- " << error_f_4 << "    N_CR1_bkg_4=" << N_CR1_bkg_4 << " +- " << error_CR1_bkg_4 << "    N_CR2_bkg_4=" << N_CR2_bkg_4 << " +- " << error_CR2_bkg_4 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 5 " <<" f_5= " << N_CR1_bkg_5/N_CR2_bkg_5 << " +- " << error_f_5 << "    N_CR1_bkg_5=" << N_CR1_bkg_5 << " +- " << error_CR1_bkg_5 << "    N_CR2_bkg_5=" << N_CR2_bkg_5 << " +- " << error_CR2_bkg_5 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 6 " <<" f_6= " << N_CR1_bkg_6/N_CR2_bkg_6 << " +- " << error_f_6 << "    N_CR1_bkg_6=" << N_CR1_bkg_6 << " +- " << error_CR1_bkg_6 << "    N_CR2_bkg_6=" << N_CR2_bkg_6 << " +- " << error_CR2_bkg_6 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 7 " <<" f_7= " << N_CR1_bkg_7/N_CR2_bkg_7 << " +- " << error_f_7 << "    N_CR1_bkg_7=" << N_CR1_bkg_7 << " +- " << error_CR1_bkg_7 << "    N_CR2_bkg_7=" << N_CR2_bkg_7 << " +- " << error_CR2_bkg_7 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 8 " <<" f_8= " << N_CR1_bkg_8/N_CR2_bkg_8 << " +- " << error_f_8 << "    N_CR1_bkg_8=" << N_CR1_bkg_8 << " +- " << error_CR1_bkg_8 << "    N_CR2_bkg_8=" << N_CR2_bkg_8 << " +- " << error_CR2_bkg_8 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 9 " <<" f_9= " << N_CR1_bkg_9/N_CR2_bkg_9 << " +- " << error_f_9 << "    N_CR1_bkg_9=" << N_CR1_bkg_9 << " +- " << error_CR1_bkg_9 << "    N_CR2_bkg_9=" << N_CR2_bkg_9 << " +- " << error_CR2_bkg_9 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 10 " <<" f_10= " << N_CR1_bkg_10/N_CR2_bkg_10 << " +- " << error_f_10 << "    N_CR1_bkg_10=" << N_CR1_bkg_10 << " +- " << error_CR1_bkg_10 << "    N_CR2_bkg_10=" << N_CR2_bkg_10 << " +- " << error_CR2_bkg_10 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "" << '\n';


                    N_CR1_bkg_excl_jg_1=hist_CR1_bkg_excl_jg_1->IntegralAndError(1, nbins, error_CR1_bkg_excl_jg_1, "");
                    N_CR1_bkg_excl_jg_2=hist_CR1_bkg_excl_jg_2->IntegralAndError(1, nbins, error_CR1_bkg_excl_jg_2, "");
                    N_CR1_bkg_excl_jg_3=hist_CR1_bkg_excl_jg_3->IntegralAndError(1, nbins, error_CR1_bkg_excl_jg_3, "");
                    N_CR1_bkg_excl_jg_4=hist_CR1_bkg_excl_jg_4->IntegralAndError(1, nbins, error_CR1_bkg_excl_jg_4, "");
                    N_CR1_bkg_excl_jg_5=hist_CR1_bkg_excl_jg_5->IntegralAndError(1, nbins, error_CR1_bkg_excl_jg_5, "");
                    N_CR1_bkg_excl_jg_6=hist_CR1_bkg_excl_jg_6->IntegralAndError(1, nbins, error_CR1_bkg_excl_jg_6, "");
                    N_CR1_bkg_excl_jg_7=hist_CR1_bkg_excl_jg_7->IntegralAndError(1, nbins, error_CR1_bkg_excl_jg_7, "");
                    N_CR1_bkg_excl_jg_8=hist_CR1_bkg_excl_jg_8->IntegralAndError(1, nbins, error_CR1_bkg_excl_jg_8, "");
                    N_CR1_bkg_excl_jg_9=hist_CR1_bkg_excl_jg_9->IntegralAndError(1, nbins, error_CR1_bkg_excl_jg_9, "");
                    N_CR1_bkg_excl_jg_10=hist_CR1_bkg_excl_jg_10->IntegralAndError(1, nbins, error_CR1_bkg_excl_jg_10, "");


                    N_CR2_bkg_excl_jg_1=hist_CR2_bkg_excl_jg_1->IntegralAndError(1, nbins, error_CR2_bkg_excl_jg_1, "");
                    N_CR2_bkg_excl_jg_2=hist_CR2_bkg_excl_jg_2->IntegralAndError(1, nbins, error_CR2_bkg_excl_jg_2, "");
                    N_CR2_bkg_excl_jg_3=hist_CR2_bkg_excl_jg_3->IntegralAndError(1, nbins, error_CR2_bkg_excl_jg_3, "");
                    N_CR2_bkg_excl_jg_4=hist_CR2_bkg_excl_jg_4->IntegralAndError(1, nbins, error_CR2_bkg_excl_jg_4, "");
                    N_CR2_bkg_excl_jg_5=hist_CR2_bkg_excl_jg_5->IntegralAndError(1, nbins, error_CR2_bkg_excl_jg_5, "");
                    N_CR2_bkg_excl_jg_6=hist_CR2_bkg_excl_jg_6->IntegralAndError(1, nbins, error_CR2_bkg_excl_jg_6, "");
                    N_CR2_bkg_excl_jg_7=hist_CR2_bkg_excl_jg_7->IntegralAndError(1, nbins, error_CR2_bkg_excl_jg_7, "");
                    N_CR2_bkg_excl_jg_8=hist_CR2_bkg_excl_jg_8->IntegralAndError(1, nbins, error_CR2_bkg_excl_jg_8, "");
                    N_CR2_bkg_excl_jg_9=hist_CR2_bkg_excl_jg_9->IntegralAndError(1, nbins, error_CR2_bkg_excl_jg_9, "");
                    N_CR2_bkg_excl_jg_10=hist_CR2_bkg_excl_jg_10->IntegralAndError(1, nbins, error_CR2_bkg_excl_jg_10, "");

                    N_sig_iso=hist_sig_iso->IntegralAndError(1, nbins, error_sig_iso, "");
                    N_bkg_iso=hist_bkg_iso->IntegralAndError(1, nbins, error_bkg_iso, "");
                    N_bkg_excl_jg_iso=hist_bkg_excl_jg_iso->IntegralAndError(1, nbins, error_bkg_excl_jg_iso, "");

                    std::cout << " N_sig_iso=" << N_sig_iso << " +- " << error_sig_iso  << '\n';
                    std::cout << "" << '\n';

                    std::cout << " N_bkg_iso=" << N_bkg_iso << " +- " << error_bkg_iso  << '\n';
                    std::cout << "" << '\n';

                    std::cout << " N_bkg_excl_jg_iso=" << N_bkg_excl_jg_iso << " +- " << error_bkg_excl_jg_iso  << '\n';


                    hist_CR1_data_1->Add(hist_CR1_bkg_1,1);
                    hist_CR1_data_2->Add(hist_CR1_bkg_2,1);
                    hist_CR1_data_3->Add(hist_CR1_bkg_3,1);
                    hist_CR1_data_4->Add(hist_CR1_bkg_4,1);
                    hist_CR1_data_5->Add(hist_CR1_bkg_5,1);
                    hist_CR1_data_6->Add(hist_CR1_bkg_6,1);
                    hist_CR1_data_7->Add(hist_CR1_bkg_7,1);
                    hist_CR1_data_8->Add(hist_CR1_bkg_8,1);
                    hist_CR1_data_9->Add(hist_CR1_bkg_9,1);
                    hist_CR1_data_10->Add(hist_CR1_bkg_10,1);


                    hist_CR1_data_1->Add(hist_CR1_sig_1,1);
                    hist_CR1_data_2->Add(hist_CR1_sig_2,1);
                    hist_CR1_data_3->Add(hist_CR1_sig_3,1);
                    hist_CR1_data_4->Add(hist_CR1_sig_4,1);
                    hist_CR1_data_5->Add(hist_CR1_sig_5,1);
                    hist_CR1_data_6->Add(hist_CR1_sig_6,1);
                    hist_CR1_data_7->Add(hist_CR1_sig_7,1);
                    hist_CR1_data_8->Add(hist_CR1_sig_8,1);
                    hist_CR1_data_9->Add(hist_CR1_sig_9,1);
                    hist_CR1_data_10->Add(hist_CR1_sig_10,1);


                    hist_CR1_data_1->Add(hist_CR1_bkg_excl_jg_1,1);
                    hist_CR1_data_2->Add(hist_CR1_bkg_excl_jg_2,1);
                    hist_CR1_data_3->Add(hist_CR1_bkg_excl_jg_3,1);
                    hist_CR1_data_4->Add(hist_CR1_bkg_excl_jg_4,1);
                    hist_CR1_data_5->Add(hist_CR1_bkg_excl_jg_5,1);
                    hist_CR1_data_6->Add(hist_CR1_bkg_excl_jg_6,1);
                    hist_CR1_data_7->Add(hist_CR1_bkg_excl_jg_7,1);
                    hist_CR1_data_8->Add(hist_CR1_bkg_excl_jg_8,1);
                    hist_CR1_data_9->Add(hist_CR1_bkg_excl_jg_9,1);
                    hist_CR1_data_10->Add(hist_CR1_bkg_excl_jg_10,1);



                    hist_CR2_data_1->Add(hist_non_t_bkg_excl_jg_1,1);
                    hist_CR2_data_2->Add(hist_non_t_bkg_excl_jg_2,1);
                    hist_CR2_data_3->Add(hist_non_t_bkg_excl_jg_3,1);
                    hist_CR2_data_4->Add(hist_non_t_bkg_excl_jg_4,1);
                    hist_CR2_data_5->Add(hist_non_t_bkg_excl_jg_5,1);
                    hist_CR2_data_6->Add(hist_non_t_bkg_excl_jg_6,1);
                    hist_CR2_data_7->Add(hist_non_t_bkg_excl_jg_7,1);
                    hist_CR2_data_8->Add(hist_non_t_bkg_excl_jg_8,1);
                    hist_CR2_data_9->Add(hist_non_t_bkg_excl_jg_9,1);
                    hist_CR2_data_10->Add(hist_non_t_bkg_excl_jg_10,1);



                    hist_CR2_data_1->Add(hist_non_t_bkg_1,1);
                    hist_CR2_data_2->Add(hist_non_t_bkg_2,1);
                    hist_CR2_data_3->Add(hist_non_t_bkg_3,1);
                    hist_CR2_data_4->Add(hist_non_t_bkg_4,1);
                    hist_CR2_data_5->Add(hist_non_t_bkg_5,1);
                    hist_CR2_data_6->Add(hist_non_t_bkg_6,1);
                    hist_CR2_data_7->Add(hist_non_t_bkg_7,1);
                    hist_CR2_data_8->Add(hist_non_t_bkg_8,1);
                    hist_CR2_data_9->Add(hist_non_t_bkg_9,1);
                    hist_CR2_data_10->Add(hist_non_t_bkg_10,1);



                    hist_CR2_data_1->Add(hist_non_t_sig_1,1);
                    hist_CR2_data_2->Add(hist_non_t_sig_2,1);
                    hist_CR2_data_3->Add(hist_non_t_sig_3,1);
                    hist_CR2_data_4->Add(hist_non_t_sig_4,1);
                    hist_CR2_data_5->Add(hist_non_t_sig_5,1);
                    hist_CR2_data_6->Add(hist_non_t_sig_6,1);
                    hist_CR2_data_7->Add(hist_non_t_sig_7,1);
                    hist_CR2_data_8->Add(hist_non_t_sig_8,1);
                    hist_CR2_data_9->Add(hist_non_t_sig_9,1);
                    hist_CR2_data_10->Add(hist_non_t_sig_10,1);


                    hist_data_iso->Add(hist_bkg_excl_jg_iso,1);
                    hist_data_iso->Add(hist_bkg_iso,1);
                    hist_data_iso->Add(hist_sig_iso,1);

                    N_data_iso=hist_data_iso->IntegralAndError(1, nbins, error_data_iso, "");
                    // N_sig_iso=hist_sig_iso->IntegralAndError(1, nbins, error_sig_iso, "");
                    // N_bkg_iso=hist_bkg_iso->IntegralAndError(1, nbins, error_bkg_iso, "");
                    // N_bkg_excl_jg_iso=hist_bkg_excl_jg_iso->IntegralAndError(1, nbins, error_bkg_excl_jg_iso, "");

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


                    std::cout << "" << '\n';

                    std::cout << " N_data_iso=" << N_data_iso << " +- " << error_data_iso  << '\n';
                    std::cout << "" << '\n';



                    std::cout << "" << '\n';

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


                    N_non_t_bkg_1=hist_non_t_bkg_1->IntegralAndError(1, nbins, error_non_t_bkg_1, "");
                    N_non_t_bkg_2=hist_non_t_bkg_2->IntegralAndError(1, nbins, error_non_t_bkg_2, "");
                    N_non_t_bkg_3=hist_non_t_bkg_3->IntegralAndError(1, nbins, error_non_t_bkg_3, "");
                    N_non_t_bkg_4=hist_non_t_bkg_4->IntegralAndError(1, nbins, error_non_t_bkg_4, "");
                    N_non_t_bkg_5=hist_non_t_bkg_5->IntegralAndError(1, nbins, error_non_t_bkg_5, "");
                    N_non_t_bkg_6=hist_non_t_bkg_6->IntegralAndError(1, nbins, error_non_t_bkg_6, "");
                    N_non_t_bkg_7=hist_non_t_bkg_7->IntegralAndError(1, nbins, error_non_t_bkg_7, "");
                    N_non_t_bkg_8=hist_non_t_bkg_8->IntegralAndError(1, nbins, error_non_t_bkg_8, "");
                    N_non_t_bkg_9=hist_non_t_bkg_9->IntegralAndError(1, nbins, error_non_t_bkg_9, "");
                    N_non_t_bkg_10=hist_non_t_bkg_10->IntegralAndError(1, nbins, error_non_t_bkg_10, "");



                    N_non_t_bkg_excl_jg_1=hist_non_t_bkg_excl_jg_1->IntegralAndError(1, nbins, error_non_t_bkg_excl_jg_1, "");
                    N_non_t_bkg_excl_jg_2=hist_non_t_bkg_excl_jg_2->IntegralAndError(1, nbins, error_non_t_bkg_excl_jg_2, "");
                    N_non_t_bkg_excl_jg_3=hist_non_t_bkg_excl_jg_3->IntegralAndError(1, nbins, error_non_t_bkg_excl_jg_3, "");
                    N_non_t_bkg_excl_jg_4=hist_non_t_bkg_excl_jg_4->IntegralAndError(1, nbins, error_non_t_bkg_excl_jg_4, "");
                    N_non_t_bkg_excl_jg_5=hist_non_t_bkg_excl_jg_5->IntegralAndError(1, nbins, error_non_t_bkg_excl_jg_5, "");
                    N_non_t_bkg_excl_jg_6=hist_non_t_bkg_excl_jg_6->IntegralAndError(1, nbins, error_non_t_bkg_excl_jg_6, "");
                    N_non_t_bkg_excl_jg_7=hist_non_t_bkg_excl_jg_7->IntegralAndError(1, nbins, error_non_t_bkg_excl_jg_7, "");
                    N_non_t_bkg_excl_jg_8=hist_non_t_bkg_excl_jg_8->IntegralAndError(1, nbins, error_non_t_bkg_excl_jg_8, "");
                    N_non_t_bkg_excl_jg_9=hist_non_t_bkg_excl_jg_9->IntegralAndError(1, nbins, error_non_t_bkg_excl_jg_9, "");
                    N_non_t_bkg_excl_jg_10=hist_non_t_bkg_excl_jg_10->IntegralAndError(1, nbins, error_non_t_bkg_excl_jg_10, "");



                    N_non_t_sig_1=hist_non_t_sig_1->IntegralAndError(1, nbins, error_non_t_sig_1, "");
                    N_non_t_sig_2=hist_non_t_sig_2->IntegralAndError(1, nbins, error_non_t_sig_2, "");
                    N_non_t_sig_3=hist_non_t_sig_3->IntegralAndError(1, nbins, error_non_t_sig_3, "");
                    N_non_t_sig_4=hist_non_t_sig_4->IntegralAndError(1, nbins, error_non_t_sig_4, "");
                    N_non_t_sig_5=hist_non_t_sig_5->IntegralAndError(1, nbins, error_non_t_sig_5, "");
                    N_non_t_sig_6=hist_non_t_sig_6->IntegralAndError(1, nbins, error_non_t_sig_6, "");
                    N_non_t_sig_7=hist_non_t_sig_7->IntegralAndError(1, nbins, error_non_t_sig_7, "");
                    N_non_t_sig_8=hist_non_t_sig_8->IntegralAndError(1, nbins, error_non_t_sig_8, "");
                    N_non_t_sig_9=hist_non_t_sig_9->IntegralAndError(1, nbins, error_non_t_sig_9, "");
                    N_non_t_sig_10=hist_non_t_sig_10->IntegralAndError(1, nbins, error_non_t_sig_10, "");


                    std::cout << "slice 1 " << " N_non_t_sig_1=" << N_non_t_sig_1 << " +- " << error_non_t_sig_1 << "    N_non_t_bkg_1=" << N_non_t_bkg_1 << " +- " << error_non_t_bkg_1 << "    N_non_t_bkg_excl_jg_1=" << N_non_t_bkg_excl_jg_1 << " +- " << error_non_t_bkg_excl_jg_1 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 2 " << " N_non_t_sig_2=" << N_non_t_sig_2 << " +- " << error_non_t_sig_2 << "    N_non_t_bkg_2=" << N_non_t_bkg_2 << " +- " << error_non_t_bkg_2 << "    N_non_t_bkg_excl_jg_2=" << N_non_t_bkg_excl_jg_2 << " +- " << error_non_t_bkg_excl_jg_2 <<'\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 3 " << " N_non_t_sig_3=" << N_non_t_sig_3 << " +- " << error_non_t_sig_3 << "     N_non_t_bkg_3_data=" << N_non_t_bkg_3<< " +- " << error_non_t_bkg_3 << "    N_non_t_bkg_excl_jg_3=" << N_non_t_bkg_excl_jg_3 << " +- " << error_non_t_bkg_excl_jg_3 <<'\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 4 " << " N_non_t_sig_4=" << N_non_t_sig_4 << " +- " << error_non_t_sig_4 << "         N_non_t_bkg_4=" << N_non_t_bkg_4 << " +- " << error_non_t_bkg_4 << "    N_non_t_bkg_excl_jg_4=" << N_non_t_bkg_excl_jg_4 << " +- " << error_non_t_bkg_excl_jg_4 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 5 " <<" N_non_t_sig_5=" << N_non_t_sig_5 << " +- " << error_non_t_sig_5 << "      N_non_t_bkg_5=" << N_non_t_bkg_5 << " +- " << error_non_t_bkg_5 << "    N_non_t_bkg_excl_jg_5=" << N_non_t_bkg_excl_jg_5 << " +- " << error_non_t_bkg_excl_jg_5 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 6 " <<" N_non_t_sig_6=" << N_non_t_sig_6 << " +- " << error_non_t_sig_6 << "      N_non_t_bkg_6=" << N_non_t_bkg_6 << " +- " << error_non_t_bkg_6 << "    N_non_t_bkg_excl_jg_6=" << N_non_t_bkg_excl_jg_6 << " +- " << error_non_t_bkg_excl_jg_6 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 7 " <<" N_non_t_sig_7=" << N_non_t_sig_7 << " +- " << error_non_t_sig_7 << "      N_non_t_bkg_7=" << N_non_t_bkg_7 << " +- " << error_non_t_bkg_7 << "    N_non_t_bkg_excl_jg_7=" << N_non_t_bkg_excl_jg_7 << " +- " << error_non_t_bkg_excl_jg_7 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 8 " <<" N_non_t_sig_8=" << N_non_t_sig_8 << " +- " << error_non_t_sig_8 << "      N_non_t_bkg_8=" << N_non_t_bkg_8 << " +- " << error_non_t_bkg_8 << "    N_non_t_bkg_excl_jg_8=" << N_non_t_bkg_excl_jg_8 << " +- " << error_non_t_bkg_excl_jg_8 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 9 " << " N_non_t_sig_9=" << N_non_t_sig_9 << " +- " << error_non_t_sig_9 << "    N_non_t_bkg_9=" << N_non_t_bkg_9 << " +- " << error_non_t_bkg_9 << "    N_non_t_bkg_excl_jg_9=" << N_non_t_bkg_excl_jg_9 << " +- " << error_non_t_bkg_excl_jg_9 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 10 " << " N_non_t_sig_10=" << N_non_t_sig_10 << " +- " << error_non_t_sig_10 << "     N_non_t_bkg_10_data=" << N_non_t_bkg_10<< " +- " << error_non_t_bkg_10 << "    N_non_t_bkg_excl_jg_10=" << N_non_t_bkg_excl_jg_10 << " +- " << error_non_t_bkg_excl_jg_10 << '\n';
                    std::cout << "" << '\n';


                    Double_t error_CR_jetgamma_1=sqrt(pow(f_1*error_r_1*(N_CR1_data_1-f_1*(N_CR1_data_1+N_CR2_data_1))/pow(r_1-f_1,2),2)+pow(r_1*error_f_1*(r_1*(N_CR1_data_1+N_CR2_data_1)-N_CR1_data_1)/pow(r_1-f_1,2),2)+pow(f_1*(r_1-1)*error_CR1_data_1/(r_1-f_1),2)+pow(f_1*r_1*error_CR2_data_1/(r_1-f_1),2));
                    Double_t error_CR_jetgamma_2=sqrt(pow(f_2*error_r_2*(N_CR1_data_2-f_2*(N_CR1_data_2+N_CR2_data_2))/pow(r_2-f_2,2),2)+pow(r_2*error_f_2*(r_2*(N_CR1_data_2+N_CR2_data_2)-N_CR1_data_2)/pow(r_2-f_2,2),2)+pow(f_2*(r_2-1)*error_CR1_data_2/(r_2-f_2),2)+pow(f_2*r_2*error_CR2_data_2/(r_2-f_2),2));
                    Double_t error_CR_jetgamma_3=sqrt(pow(f_3*error_r_3*(N_CR1_data_3-f_3*(N_CR1_data_3+N_CR2_data_3))/pow(r_3-f_3,2),2)+pow(r_3*error_f_3*(r_3*(N_CR1_data_3+N_CR2_data_3)-N_CR1_data_3)/pow(r_3-f_3,2),2)+pow(f_3*(r_3-1)*error_CR1_data_3/(r_3-f_3),2)+pow(f_3*r_3*error_CR2_data_3/(r_3-f_3),2));
                    Double_t error_CR_jetgamma_4=sqrt(pow(f_4*error_r_4*(N_CR1_data_4-f_4*(N_CR1_data_4+N_CR2_data_4))/pow(r_4-f_4,2),2)+pow(r_4*error_f_4*(r_4*(N_CR1_data_4+N_CR2_data_4)-N_CR1_data_4)/pow(r_4-f_4,2),2)+pow(f_4*(r_4-1)*error_CR1_data_4/(r_4-f_4),2)+pow(f_4*r_4*error_CR2_data_4/(r_4-f_4),2));
                    Double_t error_CR_jetgamma_5=sqrt(pow(f_5*error_r_5*(N_CR1_data_5-f_5*(N_CR1_data_5+N_CR2_data_5))/pow(r_5-f_5,2),2)+pow(r_5*error_f_5*(r_5*(N_CR1_data_5+N_CR2_data_5)-N_CR1_data_5)/pow(r_5-f_5,2),2)+pow(f_5*(r_5-1)*error_CR1_data_5/(r_5-f_5),2)+pow(f_5*r_5*error_CR2_data_5/(r_5-f_5),2));
                    Double_t error_CR_jetgamma_6=sqrt(pow(f_6*error_r_6*(N_CR1_data_6-f_6*(N_CR1_data_6+N_CR2_data_6))/pow(r_6-f_6,2),2)+pow(r_6*error_f_6*(r_6*(N_CR1_data_6+N_CR2_data_6)-N_CR1_data_6)/pow(r_6-f_6,2),2)+pow(f_6*(r_6-1)*error_CR1_data_6/(r_6-f_6),2)+pow(f_6*r_6*error_CR2_data_6/(r_6-f_6),2));
                    Double_t error_CR_jetgamma_7=sqrt(pow(f_7*error_r_7*(N_CR1_data_7-f_7*(N_CR1_data_7+N_CR2_data_7))/pow(r_7-f_7,2),2)+pow(r_7*error_f_7*(r_7*(N_CR1_data_7+N_CR2_data_7)-N_CR1_data_7)/pow(r_7-f_7,2),2)+pow(f_7*(r_7-1)*error_CR1_data_7/(r_7-f_7),2)+pow(f_7*r_7*error_CR2_data_7/(r_7-f_7),2));
                    Double_t error_CR_jetgamma_8=sqrt(pow(f_8*error_r_8*(N_CR1_data_8-f_8*(N_CR1_data_8+N_CR2_data_8))/pow(r_8-f_8,2),2)+pow(r_8*error_f_8*(r_8*(N_CR1_data_8+N_CR2_data_8)-N_CR1_data_8)/pow(r_8-f_8,2),2)+pow(f_8*(r_8-1)*error_CR1_data_8/(r_8-f_8),2)+pow(f_8*r_8*error_CR2_data_8/(r_8-f_8),2));
                    Double_t error_CR_jetgamma_9=sqrt(pow(f_9*error_r_9*(N_CR1_data_9-f_9*(N_CR1_data_9+N_CR2_data_9))/pow(r_9-f_9,2),2)+pow(r_9*error_f_9*(r_9*(N_CR1_data_9+N_CR2_data_9)-N_CR1_data_9)/pow(r_9-f_9,2),2)+pow(f_9*(r_9-1)*error_CR1_data_9/(r_9-f_9),2)+pow(f_9*r_9*error_CR2_data_9/(r_9-f_9),2));
                    Double_t error_CR_jetgamma_10=sqrt(pow(f_10*error_r_10*(N_CR1_data_10-f_10*(N_CR1_data_10+N_CR2_data_10))/pow(r_10-f_10,2),2)+pow(r_10*error_f_10*(r_10*(N_CR1_data_10+N_CR2_data_10)-N_CR1_data_10)/pow(r_10-f_10,2),2)+pow(f_10*(r_10-1)*error_CR1_data_10/(r_10-f_10),2)+pow(f_10*r_10*error_CR2_data_10/(r_10-f_10),2));


                    Double_t N_CR_jetgamma_1=(f_1/(r_1-f_1))*((r_1-1)*N_CR1_data_1+r_1*N_CR2_data_1);
                    Double_t N_CR_jetgamma_2=(f_2/(r_2-f_2))*((r_2-1)*N_CR1_data_2+r_2*N_CR2_data_2);
                    Double_t N_CR_jetgamma_3=(f_3/(r_3-f_3))*((r_3-1)*N_CR1_data_3+r_3*N_CR2_data_3);
                    Double_t N_CR_jetgamma_4=(f_4/(r_4-f_4))*((r_4-1)*N_CR1_data_4+r_4*N_CR2_data_4);
                    Double_t N_CR_jetgamma_5=(f_5/(r_5-f_5))*((r_5-1)*N_CR1_data_5+r_5*N_CR2_data_5);
                    Double_t N_CR_jetgamma_6=(f_6/(r_6-f_6))*((r_6-1)*N_CR1_data_6+r_6*N_CR2_data_6);
                    Double_t N_CR_jetgamma_7=(f_7/(r_7-f_7))*((r_7-1)*N_CR1_data_7+r_7*N_CR2_data_7);
                    Double_t N_CR_jetgamma_8=(f_8/(r_8-f_8))*((r_8-1)*N_CR1_data_8+r_8*N_CR2_data_8);
                    Double_t N_CR_jetgamma_9=(f_9/(r_9-f_9))*((r_9-1)*N_CR1_data_9+r_9*N_CR2_data_9);
                    Double_t N_CR_jetgamma_10=(f_10/(r_10-f_10))*((r_10-1)*N_CR1_data_10+r_10*N_CR2_data_10);

                    std::cout << "slice 1 " << " N_CR_jetgamma_1=" << N_CR_jetgamma_1 << " +- " << error_CR_jetgamma_1 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 2 " << " N_CR_jetgamma_2=" << N_CR_jetgamma_2 << " +- " << error_CR_jetgamma_2 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 3 " << " N_CR_jetgamma_3=" << N_CR_jetgamma_3 << " +- " << error_CR_jetgamma_3 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 4 " << " N_CR_jetgamma_4=" << N_CR_jetgamma_4  << " +- " << error_CR_jetgamma_4 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 5 " <<" N_CR_jetgamma_5=" << N_CR_jetgamma_5  << " +- " << error_CR_jetgamma_5 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 6 " <<" N_CR_jetgamma_6=" << N_CR_jetgamma_6  << " +- " << error_CR_jetgamma_6 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 7 " <<" N_CR_jetgamma_7=" << N_CR_jetgamma_7  << " +- " << error_CR_jetgamma_7 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 8 " <<" N_CR_jetgamma_8=" << N_CR_jetgamma_8  << " +- " << error_CR_jetgamma_8 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 9 " << " N_CR_jetgamma_9=" << N_CR_jetgamma_9 << " +- " << error_CR_jetgamma_9 << '\n';
                    std::cout << "" << '\n';

                    std::cout << "slice 10 " << " N_CR_jetgamma_10=" << N_CR_jetgamma_10 << " +- " << error_CR_jetgamma_10 << '\n';
                    std::cout << "" << '\n';


                    std::string playground;

                    while (1) {
                      cout << "Choose Playground area:" << endl << "> ";
                      cin >> playground;
                        if(playground == "expo") {
                          TCanvas *c1=new TCanvas("", "");
                          double_t x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
                          double_t ex[10]={0,0,0,0,0,0,0,0,0,0};

                          double_t y1[10]={N_CR_jetgamma_1, N_CR_jetgamma_2, N_CR_jetgamma_3, N_CR_jetgamma_4, N_CR_jetgamma_5, N_CR_jetgamma_6, N_CR_jetgamma_7, N_CR_jetgamma_8, N_CR_jetgamma_9, N_CR_jetgamma_10};
                          double_t ey1[10]={error_CR_jetgamma_1, error_CR_jetgamma_2, error_CR_jetgamma_3, error_CR_jetgamma_4, error_CR_jetgamma_5, error_CR_jetgamma_6, error_CR_jetgamma_7, error_CR_jetgamma_8, error_CR_jetgamma_9, error_CR_jetgamma_10};


                          TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
                          graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
                          graph1->GetXaxis()->SetLimits(0,0.22);
                          graph1->SetMarkerStyle(20);
                          graph1->SetMarkerColor(1);
                          TF1 *fit = new TF1("", "expo");
                          fit->SetLineColor(9);
                          graph1->Fit(fit);
                          graph1->Draw("AP");
                          Double_t N_SR_jg=fit->Eval(Isolation_point);
                          graph1->GetYaxis()->SetRangeUser(0,N_SR_jg+500);
                          graph1->GetXaxis()->SetTitleOffset(1.1);
                          graph1->GetYaxis()->SetTitleOffset(1.2);

                          Double_t chi2=fit->GetChisquare();
                          std::cout << "chi2=" << chi2 << '\n';
                          Double_t ndof=fit->GetNDF();
                          std::cout << "ndof=" << ndof << '\n';



                          Double_t er_jg=N_SR_jg*sqrt(pow(fit->GetParError(0),2)+pow(Isolation_point*(fit->GetParError(1)),2));

                          std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_jg << '\n';
                          TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
                          leg->SetBorderSize(0);
                          leg->SetTextFont(42);
                          //leg->SetTextFont(42);
                          leg->AddEntry(graph1, "jet->gamma in i slice", "lep");
                          leg->AddEntry(fit,"Expo fit", "l");
                          leg->AddEntry((TObject*)0, TString::Format("#chi^{2}/N_{d.o.f.}=%g/%d", fit->GetChisquare(), fit->GetNDF()),  "");
                          leg->Draw();

                          TLine *l = new TLine(Isolation_point,0,Isolation_point,N_SR_jg+500);
                          l->SetY1(0);
                          l->SetLineColor(6);
                          l->SetLineWidth(3);
                          l->SetLineStyle(9);
                          l->Draw("SAME");

                          // TLatex* latex=new TLatex();
                          // latex->DrawLatex(0,0,"#bf{#it{ATLAS}} Internal");
                          // latex->DrawLatex(0,0,"#sqrt{s}=13 TeV, 140 fb^{-1}");
                        }

                        else if (playground == "pol3"){


                          TCanvas *c1=new TCanvas("", "");

                          double_t x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
                          double_t ex[10]={0,0,0,0,0,0,0,0,0,0};

                          double_t y1[10]={N_CR_jetgamma_1, N_CR_jetgamma_2, N_CR_jetgamma_3, N_CR_jetgamma_4, N_CR_jetgamma_5, N_CR_jetgamma_6, N_CR_jetgamma_7, N_CR_jetgamma_8, N_CR_jetgamma_9, N_CR_jetgamma_10};
                          double_t ey1[10]={error_CR_jetgamma_1, error_CR_jetgamma_2, error_CR_jetgamma_3, error_CR_jetgamma_4, error_CR_jetgamma_5, error_CR_jetgamma_6, error_CR_jetgamma_7, error_CR_jetgamma_8, error_CR_jetgamma_9, error_CR_jetgamma_10};

                          TF1 *fit = new TF1("", "pol3", 0, 0.210);

                          fit->SetLineColor(9);
                          TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
                          graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
                          graph1->GetXaxis()->SetLimits(0, 0.210);
                          graph1->SetMarkerStyle(20);
                          graph1->SetMarkerColor(1);
                          graph1->Fit(fit);
                          graph1->Draw("AP");
                          Double_t N_SR_jg=fit->Eval(Isolation_point);
                          graph1->GetYaxis()->SetRangeUser(0,N_SR_jg+500);
                          graph1->GetXaxis()->SetTitleOffset(1.1);
                          graph1->GetYaxis()->SetTitleOffset(1.2);

                          Double_t chi2=fit->GetChisquare();
                          std::cout << "chi2=" << chi2 << '\n';
                          Double_t ndof=fit->GetNDF();
                          std::cout << "ndof=" << ndof << '\n';

                          Double_t er_1=sqrt(pow(fit->GetParError(0),2)+pow(Isolation_point*(fit->GetParError(1)),2)+pow(pow(Isolation_point,2)*(fit->GetParError(2)),2)+pow(pow(Isolation_point,3)*(fit->GetParError(3)),2));

                          std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_1 << '\n';
                          TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
                          leg->SetBorderSize(0);
                          leg->SetTextFont(42);
                          leg->AddEntry(graph1, "jet->gamma in i slice", "lep");
                          leg->AddEntry(fit,"Pol3 fit", "l");
                          leg->AddEntry((TObject*)0, TString::Format("#chi^{2}/N_{d.o.f.}=%g/%d", fit->GetChisquare(), fit->GetNDF()),  "");
                          leg->Draw();
                          TLine *l = new TLine(Isolation_point,0,Isolation_point,N_SR_jg+500);
                          l->SetY1(0);
                          l->SetLineColor(6);
                          l->SetLineWidth(3);
                          l->SetLineStyle(9);
                          l->Draw("SAME");

                          }

                          else if (playground == "pol2"){

                            TCanvas *c1=new TCanvas("", "");

                            double_t x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
                            double_t ex[10]={0,0,0,0,0,0,0,0,0,0};

                            double_t y1[10]={N_CR_jetgamma_1, N_CR_jetgamma_2, N_CR_jetgamma_3, N_CR_jetgamma_4, N_CR_jetgamma_5, N_CR_jetgamma_6, N_CR_jetgamma_7, N_CR_jetgamma_8, N_CR_jetgamma_9, N_CR_jetgamma_10};
                            double_t ey1[10]={error_CR_jetgamma_1, error_CR_jetgamma_2, error_CR_jetgamma_3, error_CR_jetgamma_4, error_CR_jetgamma_5, error_CR_jetgamma_6, error_CR_jetgamma_7, error_CR_jetgamma_8, error_CR_jetgamma_9, error_CR_jetgamma_10};


                            TF1 *fit = new TF1("", "pol2", 0, 0.210);

                            fit->SetLineColor(9);
                            TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
                            graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
                            graph1->GetXaxis()->SetLimits(0, 0.210);
                            graph1->SetMarkerStyle(20);
                            graph1->SetMarkerColor(1);
                            graph1->Fit(fit);
                            graph1->Draw("AP");
                            Double_t N_SR_jg=fit->Eval(Isolation_point);
                            graph1->GetYaxis()->SetRangeUser(0,N_SR_jg+500);
                            graph1->GetXaxis()->SetTitleOffset(1.1);
                            graph1->GetYaxis()->SetTitleOffset(1.2);

                            Double_t chi2=fit->GetChisquare();
                            std::cout << "chi2=" << chi2 << '\n';
                            Double_t ndof=fit->GetNDF();
                            std::cout << "ndof=" << ndof << '\n';


                            Double_t er_1=sqrt(pow(fit->GetParError(0),2)+pow(Isolation_point*(fit->GetParError(1)),2)+pow(pow(Isolation_point,2)*(fit->GetParError(2)),2));

                            std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_1 << '\n';
                            TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
                            leg->SetBorderSize(0);
                            leg->SetTextFont(42);
                            leg->AddEntry(graph1, "jet->gamma in i slice", "lep");
                            leg->AddEntry(fit,"Pol2 fit", "l");
                            leg->AddEntry((TObject*)0, TString::Format("#chi^{2}/N_{d.o.f.}=%g/%d", fit->GetChisquare(), fit->GetNDF()),  "");
                            leg->Draw();
                            TLine *l = new TLine(Isolation_point,0,Isolation_point,N_SR_jg+500);
                            l->SetY1(0);
                            l->SetLineColor(6);
                            l->SetLineWidth(3);
                            l->SetLineStyle(9);
                            l->Draw("SAME");

                            }

                            else if (playground == "pol1"){


                              TCanvas *c1=new TCanvas("", "");

                              double_t x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
                              double_t ex[10]={0,0,0,0,0,0,0,0,0,0};

                              double_t y1[10]={N_CR_jetgamma_1, N_CR_jetgamma_2, N_CR_jetgamma_3, N_CR_jetgamma_4, N_CR_jetgamma_5, N_CR_jetgamma_6, N_CR_jetgamma_7, N_CR_jetgamma_8, N_CR_jetgamma_9, N_CR_jetgamma_10};
                              double_t ey1[10]={error_CR_jetgamma_1, error_CR_jetgamma_2, error_CR_jetgamma_3, error_CR_jetgamma_4, error_CR_jetgamma_5, error_CR_jetgamma_6, error_CR_jetgamma_7, error_CR_jetgamma_8, error_CR_jetgamma_9, error_CR_jetgamma_10};

                              TF1 *fit = new TF1("", "pol1", 0, 0.210);

                              fit->SetLineColor(9);
                              TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
                              graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
                              graph1->GetXaxis()->SetLimits(0, 0.210);
                              graph1->SetMarkerStyle(20);
                              graph1->SetMarkerColor(1);
                              graph1->Fit(fit);
                              graph1->Draw("AP");
                              Double_t N_SR_jg=fit->Eval(Isolation_point);
                              graph1->GetYaxis()->SetRangeUser(0,N_SR_jg+500);
                              graph1->GetXaxis()->SetTitleOffset(1.1);
                              graph1->GetYaxis()->SetTitleOffset(1.2);

                              Double_t chi2=fit->GetChisquare();
                              std::cout << "chi2=" << chi2 << '\n';
                              Double_t ndof=fit->GetNDF();
                              std::cout << "ndof=" << ndof << '\n';


                              Double_t er_1=sqrt(pow(fit->GetParError(0),2)+pow(Isolation_point*(fit->GetParError(1)),2));

                              std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_1 << '\n';
                              TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
                              leg->SetBorderSize(0);
                              leg->SetTextFont(42);
                              leg->AddEntry(graph1, "jet->gamma in i slice", "lep");
                              leg->AddEntry(fit,"Pol1 fit", "l");
                              leg->AddEntry((TObject*)0, TString::Format("#chi^{2}/N_{d.o.f.}=%g/%d", fit->GetChisquare(), fit->GetNDF()),  "");
                              leg->Draw();
                              TLine *l = new TLine(Isolation_point,0,Isolation_point,N_SR_jg+500);
                              l->SetY1(0);
                              l->SetLineColor(6);
                              l->SetLineWidth(3);
                              l->SetLineStyle(9);
                              l->Draw("SAME");
                              }

                              else if (playground == "landau"){


                                TCanvas *c1=new TCanvas("", "");
                                double_t x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
                                double_t ex[10]={0,0,0,0,0,0,0,0,0,0};

                                double_t y1[10]={N_CR_jetgamma_1, N_CR_jetgamma_2, N_CR_jetgamma_3, N_CR_jetgamma_4, N_CR_jetgamma_5, N_CR_jetgamma_6, N_CR_jetgamma_7, N_CR_jetgamma_8, N_CR_jetgamma_9, N_CR_jetgamma_10};
                                double_t ey1[10]={error_CR_jetgamma_1, error_CR_jetgamma_2, error_CR_jetgamma_3, error_CR_jetgamma_4, error_CR_jetgamma_5, error_CR_jetgamma_6, error_CR_jetgamma_7, error_CR_jetgamma_8, error_CR_jetgamma_9, error_CR_jetgamma_10};

                                TF1 *fit = new TF1("fit", "landau", 0, 0.2075);
                                fit->SetLineColor(9);
                                TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
                                graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
                                graph1->GetXaxis()->SetLimits(0,0.2075);
                                graph1->SetMarkerStyle(20);
                                graph1->SetMarkerColor(1);
                                graph1->Fit(fit);
                                graph1->Draw("AP");
                                Double_t N_SR_jg=fit->Eval(Isolation_point);
                                graph1->GetYaxis()->SetRangeUser(0,3000);
                                graph1->GetXaxis()->SetTitleOffset(1.1);
                                graph1->GetYaxis()->SetTitleOffset(1.2);

                                Double_t chi2=fit->GetChisquare();
                                std::cout << "chi2=" << chi2 << '\n';
                                Double_t ndof=fit->GetNDF();
                                std::cout << "ndof=" << ndof << '\n';


                                Double_t er_1=sqrt(pow(fit->GetParError(0),2)+pow(Isolation_point*(fit->GetParError(1)),2));

                                std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_1 << '\n';
                                TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
                                leg->SetBorderSize(0);
                                leg->SetTextFont(42);
                                leg->AddEntry(graph1, "jet->gamma in i slice", "lep");
                                leg->AddEntry(fit,"Landau", "l");
                                leg->AddEntry((TObject*)0, TString::Format("#chi^{2}/N_{d.o.f.}=%g/%d", fit->GetChisquare(), fit->GetNDF()),  "");
                                leg->Draw();
                                TLine *l = new TLine(Isolation_point,0,Isolation_point,3000);
                                l->SetY1(0);
                                l->SetLineColor(6);
                                l->SetLineWidth(3);
                                l->SetLineStyle(9);
                                l->Draw("SAME");
                                }

                                else if (playground == "gaus"){


                                  TCanvas *c1=new TCanvas("", "");
                                  double_t x1[10]={0.0725, 0.0875, 0.1025, 0.1175, 0.1325, 0.1475, 0.1625, 0.1775, 0.1925, 0.2075};
                                  double_t ex[10]={0,0,0,0,0,0,0,0,0,0};

                                  double_t y1[10]={N_CR_jetgamma_1, N_CR_jetgamma_2, N_CR_jetgamma_3, N_CR_jetgamma_4, N_CR_jetgamma_5, N_CR_jetgamma_6, N_CR_jetgamma_7, N_CR_jetgamma_8, N_CR_jetgamma_9, N_CR_jetgamma_10};
                                  double_t ey1[10]={error_CR_jetgamma_1, error_CR_jetgamma_2, error_CR_jetgamma_3, error_CR_jetgamma_4, error_CR_jetgamma_5, error_CR_jetgamma_6, error_CR_jetgamma_7, error_CR_jetgamma_8, error_CR_jetgamma_9, error_CR_jetgamma_10};

                                  TF1 *fit = new TF1("fit", "gaus", 0, 0.2075);
                                  fit->SetLineColor(9);
                                  TGraphErrors *graph1=new TGraphErrors(10, x1, y1, ex, ey1);
                                  graph1->SetTitle(";E_{T}^{cone20}/p_{T};Estimate");
                                  graph1->GetXaxis()->SetLimits(0,0.2075);
                                  graph1->SetMarkerStyle(20);
                                  graph1->SetMarkerColor(1);
                                  graph1->Fit(fit);
                                  graph1->Draw("AP");
                                  Double_t N_SR_jg=fit->Eval(Isolation_point);
                                  graph1->GetYaxis()->SetRangeUser(0,N_SR_jg+500);
                                  graph1->GetXaxis()->SetTitleOffset(1.1);
                                  graph1->GetYaxis()->SetTitleOffset(1.2);

                                  Double_t chi2=fit->GetChisquare();
                                  std::cout << "chi2=" << chi2 << '\n';
                                  Double_t ndof=fit->GetNDF();
                                  std::cout << "ndof=" << ndof << '\n';


                                  Double_t er_1=N_SR_jg*sqrt(pow((fit->GetParError(0))/(fit->GetParameter(0)),2)+pow((Isolation_point-fit->GetParameter(1))*(fit->GetParError(1))/pow(fit->GetParError(2),2),2)+ pow((pow(Isolation_point-fit->GetParameter(1),2))*(fit->GetParError(2))/pow(fit->GetParameter(2),3),2));

                                  std::cout << "N_SR_jet_gamma=" << N_SR_jg << "+-" << er_1 << '\n';
                                  TLegend *leg = new TLegend(0.6, 0.8, 0.89, 0.89);
                                  leg->SetBorderSize(0);
                                  leg->SetTextFont(42);
                                  leg->AddEntry(graph1, "jet->gamma in i slice", "lep");
                                  leg->AddEntry(fit,"Gaus", "l");
                                  leg->AddEntry((TObject*)0, TString::Format("#chi^{2}/N_{d.o.f.}=%g/%d", fit->GetChisquare(), fit->GetNDF()),  "");
                                  leg->Draw();
                                  TLine *l = new TLine(Isolation_point,0,Isolation_point,N_SR_jg+500);
                                  l->SetY1(0);
                                  l->SetLineColor(6);
                                  l->SetLineWidth(3);
                                  l->SetLineStyle(9);
                                  l->Draw("SAME");
                                  }


                        else if (playground == ".q" || playground == "exit" || playground == "break" )
                              break;
                    }
}

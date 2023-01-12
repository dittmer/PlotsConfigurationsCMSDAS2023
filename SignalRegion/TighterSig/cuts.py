# cuts

supercut = ' mll > 12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>13 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '

## Signal regions
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr',
    # Define the sub-categorization of sr
   'categories' : {
	'NonRes' : 'mtw2 > 80 && Lepton_pt[0] > 70 && Lepton_pt[1] > 45',
	'Sig_0j' : '!(mtw2 > 80 && Lepton_pt[0] > 70 && Lepton_pt[1] > 45) && zeroJet',
	'Sig_1j_VBF' : '!(mtw2 > 80 && Lepton_pt[0] > 70 && Lepton_pt[1] > 45) && oneJet && abs(CleanJet_eta[0]) > 2',
	'Sig_1j_ggH' : '!(mtw2 > 80 && Lepton_pt[0] > 70 && Lepton_pt[1] > 45) && oneJet && abs(CleanJet_eta[0]) < 2',
	'Sig_2j_VBF' : '!(mtw2 > 80 && Lepton_pt[0] > 70 && Lepton_pt[1] > 45) && multiJet && abs(CleanJet_eta[0]) > 2 && abs(CleanJet_eta[1]) > 2 && detajj > 3',
	'Sig_2j_ggH' : '!(mtw2 > 80 && Lepton_pt[0] > 70 && Lepton_pt[1] > 45) && multiJet && !(abs(CleanJet_eta[0]) > 2 && abs(CleanJet_eta[1]) > 2 && detajj > 3)',

      #'0j' : 'zeroJet',
      #
      #'1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      #
      #'em_pm_0j_pt2ge20' : ' Lepton_pdgId[0]==-11 && Lepton_pt[1]>=20 && zeroJet',
      #'em_mp_0j_pt2ge20' : ' Lepton_pdgId[0]==11 && Lepton_pt[1]>=20 && zeroJet',
      #'me_mp_0j_pt2ge20' : ' Lepton_pdgId[0]==-13 && Lepton_pt[1]>=20 && zeroJet',
      #'me_pm_0j_pt2ge20' : ' Lepton_pdgId[0]==13 && Lepton_pt[1]>=20 && zeroJet',
      ##
      #'em_pm_0j_pt2lt20' : ' Lepton_pdgId[0]==-11 && Lepton_pt[1]<20 && zeroJet',
      #'em_mp_0j_pt2lt20' : ' Lepton_pdgId[0]==11 && Lepton_pt[1]<20 && zeroJet',
      #'me_mp_0j_pt2lt20' : ' Lepton_pdgId[0]==-13 && Lepton_pt[1]<20 && zeroJet',
      #'me_pm_0j_pt2lt20' : ' Lepton_pdgId[0]==13 && Lepton_pt[1]<20 && zeroJet',
      ##
      #'em_pm_1j_pt2ge20' : ' Lepton_pdgId[0]==-11 && Lepton_pt[1]>=20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      #'em_mp_1j_pt2ge20' : ' Lepton_pdgId[0]==11 && Lepton_pt[1]>=20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      #'me_mp_1j_pt2ge20' : ' Lepton_pdgId[0]==-13 && Lepton_pt[1]>=20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      #'me_pm_1j_pt2ge20' : ' Lepton_pdgId[0]==13 && Lepton_pt[1]>=20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      ##
      #'em_pm_1j_pt2lt20' : ' Lepton_pdgId[0]==-11 && Lepton_pt[1]<20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      #'em_mp_1j_pt2lt20' : ' Lepton_pdgId[0]==11 && Lepton_pt[1]<20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      #'me_mp_1j_pt2lt20' : ' Lepton_pdgId[0]==-13 && Lepton_pt[1]<20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      #'me_pm_1j_pt2lt20' : ' Lepton_pdgId[0]==13 && Lepton_pt[1]<20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      #
      #'2j' : 'multiJet', 
   }
}

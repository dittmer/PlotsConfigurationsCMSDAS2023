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
#cuts['ww_TopCR'] = {
#   'expr': 'bReq',
#   'categories' : {
#      '0j' : 'zeroJet',
#      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
#      '2j' : 'multiJet',
#    }
#}

#cuts['ww_TopCR_btag'] = {
#    'expr': 'bjets',
#}

cuts['ww_TopCR_btag'] = {
   'expr': 'bjets && mtw1',
   'categories' : {
       '1j' : 'oneJet',
       '2j' : 'multiJet'
   }
}

cuts['ww_TopCR_btag_0j'] = {
    'expr': '!bVeto && zeroJet && mtw1',
}


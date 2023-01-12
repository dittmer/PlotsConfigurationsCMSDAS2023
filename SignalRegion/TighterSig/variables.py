# variables initialized as a empty dict in mkShapesMulti.py
    
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (20,0,200),
                        'xaxis' : 'm_{T}^{H} [GeV]',
                        'fold' : 0
                        }

variables['mtw1']  = {   'name': 'mtw1',
                        'range' : (20,0,200),
                        'xaxis' : 'm_{T}^{W} 1 [GeV]',
                        'fold' : 0
                        }

variables['mtw2']  = {   'name': 'mtw2',
                        'range' : (20,0,200),
                        'xaxis' : 'm_{T}^{W} 2 [GeV]',
                        'fold' : 0
                        }

variables['pdgid1'] = { 'name': 'Lepton_pdgId[0]',
                        'range' : (27,-13.5,13.5),
                        'xaxis' : 'PDG ID 1st lep',
                        'fold'  : 0
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',
                        'range' : (30,0,150),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',
                        'range' : (30,0,150),
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0
			}

variables['mjj']  = {   'name': 'mjj',
                        'range' : (50,0,1000),
                        'xaxis' : 'mjj',
                        'fold'  : 3
                        }

variables['detajj'] = { 'name': 'detajj',
		       'range': (20, 0, 10),
		       'xaxis': '#delta#eta jj',
		       'fold' : 0
			}
 
variables['dphijj'] = { 'name': 'dphijj',
                       'range': (20, 0, 4),
                       'xaxis': '#delta#phi jj',
                       'fold' : 0
                        }

variables['eta1'] = { 'name': 'Lepton_eta[0]',
                       'range': (20, -4, 4),
                       'xaxis': 'eta1',
                       'fold' : 0
                        }

variables['eta2'] = { 'name': 'Lepton_eta[1]',
                       'range': (20, -4, 4),
                       'xaxis': 'eta2',
                       'fold' : 0
                        }

variables['phi1'] = { 'name': 'Lepton_phi[0]',
                       'range': (20, -4, 4),
                       'xaxis': 'phi1',
                       'fold' : 0
                        }

variables['phi2'] = { 'name': 'Lepton_phi[1]',
                       'range': (20, -4, 4),
                       'xaxis': 'phi2',
                       'fold' : 0
                        }

variables['jet1pt'] = { 'name': 'CleanJet_pt[0]',
                       'range': (30, 0, 150),
                       'xaxis': 'jet1pt',
                       'fold' : 0
                        }

variables['jet2pt'] = { 'name': 'CleanJet_pt[1]',
                       'range': (30, 0, 150),
                       'xaxis': 'jet2pt',
                       'fold' : 0
                        }

variables['jet1eta'] = { 'name': 'CleanJet_eta[0]',
                       'range': (24, -6, 6),
                       'xaxis': 'jet1eta',
                       'fold' : 0
                        }

variables['jet2eta'] = { 'name': 'CleanJet_eta[1]',
                       'range': (24, -6, 6),
                       'xaxis': 'jet2eta',
                       'fold' : 0
                        }

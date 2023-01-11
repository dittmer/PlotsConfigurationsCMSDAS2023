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

variables['mtw']  = {   'name': 'mth',
                        'range' : (20,0,200),
                        'xaxis' : 'm_{T}^{H} [GeV]',
                        'fold' : 0
                        }

variables['pdgid1'] = { 'name': 'Lepton_pdgId[0]',
                        'range' : (27,-13.5,13.5),
                        'xaxis' : 'PDG ID 1st lep',
                        'fold'  : 0
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',
                        'range' : (20,20,100),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0
                        }

variables['mjj']  = {   'name': 'mjj',
                        'range' : (30,0,300),
                        'xaxis' : 'mjj',
                        'fold'  : 3
                        }

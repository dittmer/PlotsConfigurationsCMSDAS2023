# variables initialized as a empty dict in mkShapesMulti.py
    
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',
                        'range' : (20, 12,200),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 0
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (20, 60,200),
                        'xaxis' : 'm_{T}^{H} [GeV]',
                        'fold' : 0
                        }

variables['mth-DY']  = {   'name': 'mth',
                        'range' : (10, 0, 60),
                        'xaxis' : 'm_{T}^{H} [GeV]',
                        'fold' : 0
                        }

variables['ptll']  = {   'name': 'ptll',
                        'range' : (20, 30,200),
                        'xaxis' : 'p_{T}^{ll} [GeV]',
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

variables['pt2']  = {   'name': 'Lepton_pt[1]',
                        'range' : (20,10,100),
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0
                        }

variables['mjj']  = {   'name': 'mjj',
                        'range' : (30,0,600),
                        'xaxis' : 'mjj',
                        'fold'  : 3
                        }

# variables['mllVSmth_pt2ge20'] = {   'name': 'mll:mth',            #   variable name    
#                              'range' : ([60,80,90,100,110,120,130,150,200],[12,25,35,40,45,50,55,70,90,210],),            #   variable range
#                              'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
#                              'fold' : 3 ,
#                              }

# variables['mllVSmth_pt2lt20'] = {   'name': 'mll:mth',            #   variable name    
#                              'range' : ([60,80,90,110,130,150,200],[12,25,40,50,70,90,210],),            #   variable range
#                              'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
#                              'fold' : 3 ,
#                              }


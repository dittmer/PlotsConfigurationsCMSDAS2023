# plot configuration

# groupPlot is initialized as an empty OrderedDict in mkPlot.py
# This is used to group multiple samples together for plotting
# If not defined, normal plots is used

groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY', 'Dyemb']
              }


# plot is defined as an empty dict in mkPlot.py
# keys here must match keys in samples.py    

plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }

plot['Dyemb']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }

# data
plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0 #0 to unblind
              }

# additional options
legend['lumi'] = 'L = 59.7/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'





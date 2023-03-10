# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

tag = 'top_cr'

# local output directory -- hadd output goes here
outputDir = 'rootFile'

# eos output directory -- when running in batch mode, output files will go to eosHomeArea/eosOutputDir 
# where eosHomeArea is set in userConfig.py
eosOutputDir = 'rootFile_'+tag

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 59.74

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'

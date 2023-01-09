import ROOT
import os

print os.getenv('LD_LIBRARY_PATH')
ROOT.gSystem.Load('ngenjet_cc.so')
args = tuple()
getattr(ROOT,'CountGenJet')(*args)

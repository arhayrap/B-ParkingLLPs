# B-ParkingLLPs

## Setup

```
cmsrel CMSSW_9_4_4
cd CMSSW_9_4_4/src
git clone git@github.com:ucsd-hep-ex/B-ParkingLLPs.git
```
## HEP data entry generation

The package generates root files which contain the TGraph, TH1D and TH2D objects from the .C macros generated by root.
The .C files which produce the plots form EXO_24_004 are located in `./HEP_Data_Entries/ConvertCToRoot/paper_plots` folder.
The .root files are generated using `./HEP_Data_Entries/ConvertCToRoot/Convert.py` modifies the .C files so they save all the plots in the scripts into root 
files, stores them in `./HEP_Data_Entries/ConvertCToRoot/modified_files/` folder and runs them and saves the root files into `./HEP_Data_Entries/ConvertCToRoot/roots/` folder.
```
python3 Convert.py
```
The tarball is produced using `./HEP_Data_Entries/CreateTarBall/CreateTarBallSubmissionFile.ipynb` file which ueses the produced root files. 
The names of the graphs and histograms are written manually by looking for them in the root files. 

In the `PrivateCentralValidation` folder the comparison of samples from private and central production can be done. To perform the plotting of the distribution the `llp.C` macro is used. 
The script produces histograms and saves them in a root file in the same folder. As input data the ntuples are used and the address of the ntuple can be changed in `llp.h`. Once the 
histograms are produced the `Plotter.C` macro can be used to overlay the produced histograms and calculate the ratios for each bin, for which the filenames are provided manually in the macro. 

## Instructions of how to make the paper plots
The commands below are ran inside `plotters` directory.

To make the 1D distributions of the EXO_24_004 paper the following command:
```
bash runPlotter_AN.sh
```
This bash script is calling the `Plotter_AN.C` script and provides input parameters to the script such as: Y axis scale log (true, false), and regions (nominal, PassOOT, test, testOOT, SR, OOT).
As input data the analyzed BParking data stored in: `/eos/user/d/ddiaz/forAram/Parking_2018_nominal_plots.root` and MC data: `/eos/user/d/ddiaz/forAram/EXTSamples/*` is used.

To make the 2D distribution of the number of hits vs the \Delta \Phi (cluster, muon) the following version of CMSSW is used: CMSSW_12_0_4. The following script is ran:
```
python3 PrintYields.py
```
which uses the `/eos/user/d/ddiaz/forAram/Parking_2018_OPT.root` file as input.

To make the extrapolated 2D plot of the branching fraction limits vs the mass and c\tau the following script is used:
```
python3 MuonSystem_plots-limitPlot-2d.py
```
As an input data the data cards and scale factors are used stored respectively in `/eos/user/d/ddiaz/forAram/Lim_WP23_GJson_unBlinded_lepIDSF_moreStats1_IT/*/{CSC or DT}/card.txt` and 
`/eos/user/d/ddiaz/forAram/Lim_WP23_GJson_unBlinded_lepIDSF_moreStats1_IT/*/{CSC or DT}/higgsCombineTest.AsymptoticLimits.mH120.root`. The limits contained in these files consider the 
contribution of the \pi^0\pi^0 samples, the samples for which the corresponding contribution is 0 events the limits from the previous calculation is used:
`/eos/user/d/ddiaz/forAram/Lim_WP23_GJson_unBlinded_lepIDSF_moreStats1_IT--beforePi0/*/{CSC or DT}/card.txt` and `/eos/user/d/ddiaz/forAram/Lim_WP23_GJson_unBlinded_lepIDSF_moreStats1_IT--beforePi0/*/{CSC or DT}/higgsCombineTest.AsymptoticLimits.mH120.root`.


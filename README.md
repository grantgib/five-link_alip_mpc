# LIP-Based Model Predictive Foot Placement Controller for Five Link Robot (RABBIT)

### Prerequisites
* Mathematica 11.0

## Installation

To clone use the commit
```
git clone --recurse-submodules git@github.com:grantgib/five_link_mpc_lip.git
```
If you've already cloned you need to grab the FROST submodule with 
```
git submodule update --init --recursive
```

## Kinematics Generation
Some of the files require precompiled functions. In order to generate these functions we use the FROST package. Navigate to 
``five_link_mpc_lip/mpc_lip_footplacement_controller/utils_fp_lipm/kinematics_dynamics/frost_generation``

and run `rabbit_kinematics_codegen.m`. Depending on your OS you should see files get generated under `gen_unix` or `gen_win`

## Running Default Simulation
To run the default example navigate to `five_link_mpc_lip/mpc_lip_footplacement_controller` and run the script `main_mpc_lip_controller.m`

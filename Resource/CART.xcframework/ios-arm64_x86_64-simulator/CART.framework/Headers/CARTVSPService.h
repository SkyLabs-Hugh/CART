//
//  CArtVSPService.h
//  CArtCoreLib
//
//  Created by fastutle on 2020/04/29.
//  Copyright © 2020 skylabs. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CARTVSPService;

@interface CARTVSPService : NSObject

- (CARTVSPService *)returnSwiftClassInstance;
+ (double) makePPG:(double)ppg_in withI:(int)i;
+ (double) makeECG:(double)ecg_in withI:(int)i;

+ (void) InitialCalwithSensor02: (double [_Nonnull]) sensor0_2ma
                       sensor12:(double [_Nonnull]) sensor1_2ma
                       sensor03:(double [_Nonnull])sensor0_3ma
                       sensor13:(double [_Nonnull]) sensor1_3ma
                       sensor04:(double [_Nonnull])sensor0_4ma
                       sensor14:(double [_Nonnull]) sensor1_4ma
                      sensor0ir: (double [_Nonnull]) sensor0ir
                     sensor0amb: (double [_Nonnull]) sensor0amb
                      sensor1ir: (double [_Nonnull]) sensor1ir
                     sensor1amb: (double [_Nonnull]) sensor1amb
                         result:(int [_Nonnull]) initial_cal_output;

+ (void) SSACInitwithSensor0: (double [_Nonnull]) sensor0
                     sensor1: (double [_Nonnull]) sensor1
                   sensor0ir: (double [_Nonnull]) sensor0ir
                  sensor0amb: (double [_Nonnull]) sensor0amb
                   sensor1ir: (double [_Nonnull]) sensor1ir
                  sensor1amb: (double [_Nonnull]) sensor1amb
                   rfInitial: (int) rf_initial cfInitial: (int) cf_initial iledInitial: (int) iled_initial
                      output: (int [_Nonnull])output;

+ (void) InitialCalwithSensor02: (double [_Nonnull]) sensor0_2ma
                       sensor12:(double [_Nonnull]) sensor1_2ma
                       sensor03:(double [_Nonnull])sensor0_3ma
                       sensor13:(double [_Nonnull]) sensor1_3ma
                       sensor04:(double [_Nonnull])sensor0_4ma
                       sensor14:(double [_Nonnull]) sensor1_4ma
                         result:(int [_Nonnull]) initial_cal_output;

+ (void) SSACInitwithSensor0: (double [_Nonnull]) sensor0
                     sensor1: (double [_Nonnull]) sensor1
                   rfInitial: (int) rf_initial cfInitial: (int) cf_initial iledInitial: (int) iled_initial
                      output: (int [_Nonnull])output;

+ (void) calISS4PhaseWithResult: (int [_Nonnull]) iss_output
                           red1: (double [_Nonnull]) red_1 ir1: (double [_Nonnull]) ir_1 green1: (double [_Nonnull]) green_1 amb1: (double [_Nonnull]) amb_1
                           red2: (double [_Nonnull]) red_2 ir2: (double [_Nonnull]) ir_2 green2: (double [_Nonnull]) green_2 amb2: (double [_Nonnull]) amb_2
                           red3: (double [_Nonnull]) red_3 ir3: (double [_Nonnull]) ir_3 green3: (double [_Nonnull]) green_3 amb3: (double [_Nonnull]) amb_3
                           red4: (double [_Nonnull]) red_4 ir4: (double [_Nonnull]) ir_4 green4: (double [_Nonnull]) green_4 amb4: (double [_Nonnull]) amb_4
                           red5: (double [_Nonnull]) red_5 ir5: (double [_Nonnull]) ir_5 green5: (double [_Nonnull]) green_5 amb5: (double [_Nonnull]) amb_5
                           red6: (double [_Nonnull]) red_6 ir6: (double [_Nonnull]) ir_6 green6: (double [_Nonnull]) green_6 amb6: (double [_Nonnull]) amb_6
                      sensor0ir: (double [_Nonnull]) sensor0ir
                     sensor0amb: (double [_Nonnull]) sensor0amb
                      sensor1ir: (double [_Nonnull]) sensor1ir
                     sensor1amb: (double [_Nonnull]) sensor1amb;

+ (void) calISS4PhaseSensorWithResult: (int [_Nonnull]) iss_output
                           red1: (double [_Nonnull]) red_1 ir1: (double [_Nonnull]) ir_1 green1: (double [_Nonnull]) green_1 amb1: (double [_Nonnull]) amb_1
                           red2: (double [_Nonnull]) red_2 ir2: (double [_Nonnull]) ir_2 green2: (double [_Nonnull]) green_2 amb2: (double [_Nonnull]) amb_2
                           red3: (double [_Nonnull]) red_3 ir3: (double [_Nonnull]) ir_3 green3: (double [_Nonnull]) green_3 amb3: (double [_Nonnull]) amb_3
                           red4: (double [_Nonnull]) red_4 ir4: (double [_Nonnull]) ir_4 green4: (double [_Nonnull]) green_4 amb4: (double [_Nonnull]) amb_4
                           red5: (double [_Nonnull]) red_5 ir5: (double [_Nonnull]) ir_5 green5: (double [_Nonnull]) green_5 amb5: (double [_Nonnull]) amb_5
                           red6: (double [_Nonnull]) red_6 ir6: (double [_Nonnull]) ir_6 green6: (double [_Nonnull]) green_6 amb6: (double [_Nonnull]) amb_6
                      sensor0ir: (double [_Nonnull]) sensor0ir
                     sensor0amb: (double [_Nonnull]) sensor0amb
                      sensor1ir: (double [_Nonnull]) sensor1ir
                     sensor1amb: (double [_Nonnull]) sensor1amb;

+ (void) calPSS4PhaseWithInput: (int [_Nonnull]) pss_input result: (int [_Nonnull]) pss_output
                          red1: (double [_Nonnull]) red_1 ir1: (double [_Nonnull]) ir_1 green1: (double [_Nonnull]) green_1 amb1: (double [_Nonnull]) amb_1
                          red2: (double [_Nonnull]) red_2 ir2: (double [_Nonnull]) ir_2 green2: (double [_Nonnull]) green_2 amb2: (double [_Nonnull]) amb_2
                     sensor0ir: (double [_Nonnull]) sensor0ir
                    sensor0amb: (double [_Nonnull]) sensor0amb
                     sensor1ir: (double [_Nonnull]) sensor1ir
                    sensor1amb: (double [_Nonnull]) sensor1amb;

@end

NS_ASSUME_NONNULL_END

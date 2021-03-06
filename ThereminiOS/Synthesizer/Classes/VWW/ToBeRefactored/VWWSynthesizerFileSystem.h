//
//  VWWFileSystem.h
//  Synthesizer
//
//  Created by Zakk Hoyt on 12/30/12.
//  Copyright (c) 2012 Zakk Hoyt. All rights reserved.
//

////Example JSON formatting
//{
//    "type" : "touchscreen",
//    "y" : {
//        "fmax" : 300,
//        "sensitivity" : 1,
//        "effect" : "none",
//        "VWWWaveTypeSawtooth" : "sin",
//        "fmin" : 20
//    },
//    "z" : {
//        "fmax" : 300,
//        "sensitivity" : 1,
//        "effect" : "none",
//        "VWWWaveTypeSawtooth" : "sin",
//        "fmin" : 20
//    },
//    "x" : {
//        "fmax" : 300,
//        "sensitivity" : 1,
//        "effect" : "none",
//        "VWWWaveTypeSawtooth" : "sin",
//        "fmin" : 20
//    }
//}
#import <Foundation/Foundation.h>

@interface VWWSynthesizerFileSystem : NSObject
+(bool)configFileExists;
+(NSString*)readFile;
+(bool)writeFile:(NSString*)contents;

@end

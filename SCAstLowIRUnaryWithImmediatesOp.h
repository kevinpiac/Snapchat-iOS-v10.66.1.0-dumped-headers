//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAstLowIRBase.h"

@interface SCAstLowIRUnaryWithImmediatesOp : SCAstLowIRBase
{
    float _immediate1;
    float _immediate2;
    long long _variable;
}

- (CDStruct_135e654f)canonicalForm;
- (CDStruct_5074f54c)composeInstructionWithRegisters:(id)arg1;
- (id)initWithVariable:(long long)arg1 immediate1:(float)arg2 immediate2:(float)arg3;
- (void)registerRecognition:(id)arg1;
- (_Bool)replaceVariable:(long long)arg1 withANewVariable:(long long)arg2;
@property(readonly, nonatomic) long long variable; // @synthesize variable=_variable;

@end

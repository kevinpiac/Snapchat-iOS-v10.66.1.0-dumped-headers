//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SCAudioProcessorProcessingWrapper
- (int)processBufferList:(struct AudioBufferList *)arg1;
- (void)setParametersWithAudioFilterStyleId:(NSString *)arg1;
- (void)setupWithFormat:(const struct AudioStreamBasicDescription *)arg1;
@end

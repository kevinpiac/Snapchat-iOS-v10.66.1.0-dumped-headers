//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SCLensSceneIntelligenceController, SCPNSceneIntRequest, SCPNSceneIntResponse;

@protocol SCSceneIntelligenceListener <NSObject>
- (void)sceneIntelligenceController:(SCLensSceneIntelligenceController *)arg1 request:(SCPNSceneIntRequest *)arg2 failedWithError:(NSError *)arg3;
- (void)sceneIntelligenceController:(SCLensSceneIntelligenceController *)arg1 request:(SCPNSceneIntRequest *)arg2 receivedResponse:(SCPNSceneIntResponse *)arg3;
- (void)sceneIntelligenceController:(SCLensSceneIntelligenceController *)arg1 willProcessRequest:(SCPNSceneIntRequest *)arg2;
@end


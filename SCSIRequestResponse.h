//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCPNSceneIntRequest, SCPNSceneIntResponse;

@interface SCSIRequestResponse : NSObject
{
    SCPNSceneIntResponse *_response;
    SCPNSceneIntRequest *_request;
}

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 response:(id)arg2;
@property(readonly, nonatomic) SCPNSceneIntRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) SCPNSceneIntResponse *response; // @synthesize response=_response;

@end


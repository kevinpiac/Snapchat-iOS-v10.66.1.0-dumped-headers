//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCLocationTimeoutProvider : NSObject
{
}

+ (void)requestLocationFromProvider:(id)arg1 continueInBackground:(_Bool)arg2 sendInitialLocation:(_Bool)arg3 timeout:(double)arg4 desiredAccuracy:(double)arg5 trackingIdentifier:(id)arg6 callbackQueue:(id)arg7 callback:(CDUnknownBlockType)arg8;
+ (void)requestLocationFromProvider:(id)arg1 timeout:(double)arg2 desiredAccuracy:(double)arg3 trackingIdentifier:(id)arg4 callbackQueue:(id)arg5 callback:(CDUnknownBlockType)arg6;

@end

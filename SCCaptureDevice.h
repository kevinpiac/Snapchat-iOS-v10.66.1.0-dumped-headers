//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCCaptureDevice : NSObject
{
}

+ (long long)authorizationStatusForMediaType:(id)arg1;
+ (id)defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;
+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


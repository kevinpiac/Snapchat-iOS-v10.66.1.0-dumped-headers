//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

@interface SCSIDebugger : NSObject
{
    NSData *_lastRequestImageData;
    NSString *_lastRequestImageID;
    NSDate *_lastRequestImageDataTimestamp;
}

+ (id)sharedDebugger;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasShakeableRequest;
@property(readonly, copy, nonatomic) NSData *lastRequestImageData; // @synthesize lastRequestImageData=_lastRequestImageData;
@property(readonly, copy, nonatomic) NSDate *lastRequestImageDataTimestamp; // @synthesize lastRequestImageDataTimestamp=_lastRequestImageDataTimestamp;
@property(readonly, copy, nonatomic) NSString *lastRequestImageID; // @synthesize lastRequestImageID=_lastRequestImageID;
- (void)logImage:(id)arg1 requestID:(id)arg2;

@end


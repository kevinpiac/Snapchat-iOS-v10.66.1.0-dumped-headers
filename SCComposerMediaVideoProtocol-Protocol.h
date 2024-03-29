//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@protocol SCComposerMediaVideoProtocol <NSObject, SCComposerMarshallable>
- (void)dispose;
- (void)extractSegmentWithStartTimeMs:(double)arg1 durationMs:(double)arg2 callback:(void (^)(id <SCComposerMediaVideoProtocol>, NSString *))arg3;
- (double)getDurationMs;
- (double)getHeight;
- (void)getMp4DataWithCallback:(void (^)(NSData *, NSString *))arg1;
- (double)getWidth;
@end


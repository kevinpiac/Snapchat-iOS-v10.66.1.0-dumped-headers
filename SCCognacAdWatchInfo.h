//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCognacAdWatchInfo : NSObject <NSCopying>
{
    NSString *_slotId;
    NSString *_requestId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSlotId:(id)arg1 requestId:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSString *slotId; // @synthesize slotId=_slotId;

@end


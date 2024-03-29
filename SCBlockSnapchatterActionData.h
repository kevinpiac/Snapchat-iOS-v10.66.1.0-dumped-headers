//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSIndexPath, NSNumber, SCSnapchatter;

@interface SCBlockSnapchatterActionData : NSObject <NSCopying>
{
    SCSnapchatter *_snapchatter;
    NSIndexPath *_indexPath;
    NSNumber *_blockReasonId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *blockReasonId; // @synthesize blockReasonId=_blockReasonId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)initWithSnapchatter:(id)arg1 indexPath:(id)arg2 blockReasonId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;

@end


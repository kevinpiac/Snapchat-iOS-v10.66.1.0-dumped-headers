//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSSet, SCCharmsOwner;

@interface SCCharmsFlushCharmViewingsDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCCharmsOwner *_flush_charmsOwner;
    SCCharmsOwner *_flushViewingToRemote_charmsOwner;
    NSSet *_flushViewingToRemote_viewedCharmIdentifiers;
}

+ (id)flushViewingToRemoteWithCharmsOwner:(id)arg1 viewedCharmIdentifiers:(id)arg2;
+ (id)flushWithCharmsOwner:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchFlush:(CDUnknownBlockType)arg1 flushViewingToRemote:(CDUnknownBlockType)arg2;

@end


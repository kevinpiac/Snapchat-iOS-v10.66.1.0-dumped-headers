//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCachedSnapchatter-Protocol.h"

@class NSString;

@interface SCCachedSnapchatter : NSObject <SCCachedSnapchatter>
{
    _Bool _exists;
    NSString *_username;
    NSString *_displayName;
    long long _lastFetchedTimestamp;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithCoder:(id)arg1;
- (id)initWithExists:(_Bool)arg1 username:(id)arg2 displayName:(id)arg3 lastFetchedTimestamp:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long lastFetchedTimestamp; // @synthesize lastFetchedTimestamp=_lastFetchedTimestamp;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


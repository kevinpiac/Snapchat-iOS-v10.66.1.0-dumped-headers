//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCDisplayContext : NSObject
{
    _Bool _isUserBlocking;
    NSArray *_contexts;
}

- (void).cxx_destruct;
- (id)appendContext:(id)arg1;
- (id)appendContexts:(id)arg1;
@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
- (unsigned long long)hash;
- (id)initWithContexts:(id)arg1;
- (id)initWithRootPageType:(long long)arg1;
- (id)initwithContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property _Bool isUserBlocking; // @synthesize isUserBlocking=_isUserBlocking;
- (id)removeContext:(id)arg1;

@end


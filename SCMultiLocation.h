//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray;

@interface SCMultiLocation : NSObject
{
    _Bool _isInferred;
    CLLocation *_current;
    NSArray *_others;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CLLocation *current; // @synthesize current=_current;
- (id)description;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocation:(id)arg1 isInferred:(_Bool)arg2 others:(id)arg3;
@property(readonly, nonatomic) _Bool isInferred; // @synthesize isInferred=_isInferred;
@property(readonly, nonatomic) NSArray *others; // @synthesize others=_others;

@end


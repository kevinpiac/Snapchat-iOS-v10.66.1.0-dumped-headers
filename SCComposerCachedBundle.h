//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableSet;

@interface SCComposerCachedBundle : NSObject
{
    NSBundle *_bundle;
    NSMutableSet *_invalidImages;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)initWithBundle:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *invalidImages; // @synthesize invalidImages=_invalidImages;

@end

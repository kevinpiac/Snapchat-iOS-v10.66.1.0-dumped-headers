//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface IGListReloadIndexPath : NSObject
{
    NSIndexPath *_fromIndexPath;
    NSIndexPath *_toIndexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *fromIndexPath; // @synthesize fromIndexPath=_fromIndexPath;
- (id)initWithFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
@property(readonly, nonatomic) NSIndexPath *toIndexPath; // @synthesize toIndexPath=_toIndexPath;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCLensDiscoveryCategoryBuilder : NSObject
{
    NSString *_title;
    NSString *_categoryId;
    _Bool _hasMore;
}

+ (id)withLensDiscoveryCategory:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCategoryId:(id)arg1;
- (id)setHasMore:(_Bool)arg1;
- (id)setTitle:(id)arg1;

@end


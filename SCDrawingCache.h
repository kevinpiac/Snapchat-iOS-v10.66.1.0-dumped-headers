//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SCDrawingCache : NSObject
{
    NSMutableArray *_indices;
    NSMutableArray *_cachedImageData;
}

- (void).cxx_destruct;
- (id)init;
- (id)mostRecentImageBeforeIndex:(long long *)arg1;
- (void)receivedMemoryWarning;
- (void)removeCachedImageAfterIndex:(long long)arg1;
- (void)setCachedImage:(id)arg1 forIndex:(long long)arg2;

@end


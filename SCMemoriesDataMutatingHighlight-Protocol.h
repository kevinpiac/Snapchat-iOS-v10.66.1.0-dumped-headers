//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCGalleryEntry;

@protocol SCMemoriesDataMutatingHighlight <NSObject>
- (void)saveFeaturedStory:(id <SCGalleryEntry>)arg1 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg2;
@end


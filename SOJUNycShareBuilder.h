//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOJUNycShareBuilder : NSObject
{
    NSString *_storyId;
    NSString *_mediaType;
    NSString *_poiId;
}

+ (id)withJUNycShare:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setMediaType:(id)arg1;
- (id)setPoiId:(id)arg1;
- (id)setStoryId:(id)arg1;

@end


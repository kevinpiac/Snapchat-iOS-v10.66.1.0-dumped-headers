//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CLLocation, NSString, NSURL, SCMapEffect, SCMapStoryThumbnail, UIColor;

@interface SCMapAnnouncement : NSObject <NSCopying>
{
    NSString *_identifier;
    double _timestamp;
    CLLocation *_location;
    double _zoom;
    NSString *_category;
    UIColor *_categoryColor;
    NSString *_title;
    NSString *_text;
    NSString *_emoji;
    NSString *_storyId;
    SCMapStoryThumbnail *_storyThumbnail;
    SCMapEffect *_mapEffect;
    NSURL *_url;
    NSString *_urlDisplayText;
    UIColor *_urlColor;
    NSString *_placeId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) UIColor *categoryColor; // @synthesize categoryColor=_categoryColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 timestamp:(double)arg2 location:(id)arg3 zoom:(double)arg4 category:(id)arg5 categoryColor:(id)arg6 title:(id)arg7 text:(id)arg8 emoji:(id)arg9 storyId:(id)arg10 storyThumbnail:(id)arg11 mapEffect:(id)arg12 url:(id)arg13 urlDisplayText:(id)arg14 urlColor:(id)arg15 placeId:(id)arg16;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) SCMapEffect *mapEffect; // @synthesize mapEffect=_mapEffect;
@property(readonly, copy, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, copy, nonatomic) SCMapStoryThumbnail *storyThumbnail; // @synthesize storyThumbnail=_storyThumbnail;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) UIColor *urlColor; // @synthesize urlColor=_urlColor;
@property(readonly, copy, nonatomic) NSString *urlDisplayText; // @synthesize urlDisplayText=_urlDisplayText;
@property(readonly, nonatomic) double zoom; // @synthesize zoom=_zoom;

@end


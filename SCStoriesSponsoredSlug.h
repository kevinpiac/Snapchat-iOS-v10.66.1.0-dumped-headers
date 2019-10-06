//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCStoriesRectangle;

@interface SCStoriesSponsoredSlug : NSObject <NSCopying>
{
    SCStoriesRectangle *_viewRect;
    long long _alignment;
    long long _position;
    NSString *_hMargin;
    NSString *_vMargin;
    NSString *_text;
    NSString *_sponsoredText;
    NSString *_sponsoredChannelText;
    long long _timeBeforeFadeout;
    NSString *_longformText;
    long long _longformTimeBeforeFadeout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *hMargin; // @synthesize hMargin=_hMargin;
- (unsigned long long)hash;
- (id)initWithViewRect:(id)arg1 alignment:(long long)arg2 position:(long long)arg3 hMargin:(id)arg4 vMargin:(id)arg5 text:(id)arg6 sponsoredText:(id)arg7 sponsoredChannelText:(id)arg8 timeBeforeFadeout:(long long)arg9 longformText:(id)arg10 longformTimeBeforeFadeout:(long long)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *longformText; // @synthesize longformText=_longformText;
@property(readonly, nonatomic) long long longformTimeBeforeFadeout; // @synthesize longformTimeBeforeFadeout=_longformTimeBeforeFadeout;
@property(readonly, nonatomic) long long position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *sponsoredChannelText; // @synthesize sponsoredChannelText=_sponsoredChannelText;
@property(readonly, copy, nonatomic) NSString *sponsoredText; // @synthesize sponsoredText=_sponsoredText;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long timeBeforeFadeout; // @synthesize timeBeforeFadeout=_timeBeforeFadeout;
@property(readonly, copy, nonatomic) NSString *vMargin; // @synthesize vMargin=_vMargin;
@property(readonly, copy, nonatomic) SCStoriesRectangle *viewRect; // @synthesize viewRect=_viewRect;

@end


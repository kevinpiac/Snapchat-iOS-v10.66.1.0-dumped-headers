//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor, UIImage;

@interface SCMapCarouselButtonViewModel : NSObject <NSCopying>
{
    _Bool _filled;
    NSString *_text;
    UIColor *_color;
    UIImage *_iconImage;
}

+ (id)viewModelForChat;
+ (id)viewModelWithCurrentUserId:(id)arg1 isInlineReplyEnabled:(_Bool)arg2 item:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (id)initWithText:(id)arg1 color:(id)arg2 iconImage:(id)arg3 filled:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isFilled) _Bool filled; // @synthesize filled=_filled;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL, SCLensChallengesSectionItem, UIColor;

@interface SCLensChallengesSectionCellViewModel : NSObject <NSCopying, NSCoding>
{
    _Bool _needsShowNewChallengeLabel;
    _Bool _isJoinButtonStartsChallenge;
    SCLensChallengesSectionItem *_sectionItem;
    NSURL *_coverURL;
    NSString *_author;
    NSString *_sectionTitle;
    UIColor *_color;
    NSString *_joinButtonTitle;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSURL *coverURL; // @synthesize coverURL=_coverURL;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionItem:(id)arg1;
- (id)initWithSectionItem:(id)arg1 coverURL:(id)arg2 author:(id)arg3 sectionTitle:(id)arg4 color:(id)arg5 needsShowNewChallengeLabel:(_Bool)arg6 joinButtonTitle:(id)arg7 isJoinButtonStartsChallenge:(_Bool)arg8;
- (id)initWithSectionItem:(id)arg1 index:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isJoinButtonStartsChallenge; // @synthesize isJoinButtonStartsChallenge=_isJoinButtonStartsChallenge;
@property(readonly, copy, nonatomic) NSString *joinButtonTitle; // @synthesize joinButtonTitle=_joinButtonTitle;
@property(readonly, nonatomic) _Bool needsShowNewChallengeLabel; // @synthesize needsShowNewChallengeLabel=_needsShowNewChallengeLabel;
@property(readonly, copy, nonatomic) SCLensChallengesSectionItem *sectionItem; // @synthesize sectionItem=_sectionItem;
@property(readonly, copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;

@end


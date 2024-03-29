//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSDictionary, NSString, SCFriendNetworkString;

@interface SCSnapchatterFriendInfoViewModel : NSObject <NSCopying>
{
    NSAttributedString *_primaryLabelAttributedText;
    NSString *_usernameText;
    NSString *_friendMojiText;
    SCFriendNetworkString *_friendScoreText;
    NSDictionary *_secondaryLabelAttributes;
    double _lineBetweenPadding;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *friendMojiText; // @synthesize friendMojiText=_friendMojiText;
@property(readonly, copy, nonatomic) SCFriendNetworkString *friendScoreText; // @synthesize friendScoreText=_friendScoreText;
- (unsigned long long)hash;
- (id)initWithPrimaryLabelAttributedText:(id)arg1 usernameText:(id)arg2 friendMojiText:(id)arg3 friendScoreText:(id)arg4 secondaryLabelAttributes:(id)arg5 lineBetweenPadding:(double)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double lineBetweenPadding; // @synthesize lineBetweenPadding=_lineBetweenPadding;
@property(readonly, copy, nonatomic) NSAttributedString *primaryLabelAttributedText; // @synthesize primaryLabelAttributedText=_primaryLabelAttributedText;
@property(readonly, copy, nonatomic) NSDictionary *secondaryLabelAttributes; // @synthesize secondaryLabelAttributes=_secondaryLabelAttributes;
@property(readonly, copy, nonatomic) NSString *usernameText; // @synthesize usernameText=_usernameText;

@end


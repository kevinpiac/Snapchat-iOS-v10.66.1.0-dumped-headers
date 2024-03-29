//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCImpalaHighlightStoryInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_profileId;
    NSString *_highlightId;
    NSString *_highlightVersion;
    NSString *_userId;
    NSString *_username;
    NSString *_highlightTitle;
    NSString *_highlightSubtitle;
    NSString *_profileLogoURL;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *highlightId; // @synthesize highlightId=_highlightId;
@property(readonly, copy, nonatomic) NSString *highlightSubtitle; // @synthesize highlightSubtitle=_highlightSubtitle;
@property(readonly, copy, nonatomic) NSString *highlightTitle; // @synthesize highlightTitle=_highlightTitle;
@property(readonly, copy, nonatomic) NSString *highlightVersion; // @synthesize highlightVersion=_highlightVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfileId:(id)arg1 highlightId:(id)arg2 highlightVersion:(id)arg3 userId:(id)arg4 username:(id)arg5 highlightTitle:(id)arg6 highlightSubtitle:(id)arg7 profileLogoURL:(id)arg8;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
@property(readonly, copy, nonatomic) NSString *profileLogoURL; // @synthesize profileLogoURL=_profileLogoURL;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end


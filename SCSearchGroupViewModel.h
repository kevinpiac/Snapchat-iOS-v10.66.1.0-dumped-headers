//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchGroupViewModel-Protocol.h"

@class NSString, SCActionModel;

@interface SCSearchGroupViewModel : NSObject <SCSearchGroupViewModel>
{
    _Bool _shouldShowSeparatorLine;
    NSString *_titleText;
    NSString *_subtitleText;
    NSString *_groupId;
    NSString *_friendmoji;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_avatarTapActionModel;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCActionModel *avatarTapActionModel; // @synthesize avatarTapActionModel=_avatarTapActionModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *friendmoji; // @synthesize friendmoji=_friendmoji;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleText:(id)arg1 subtitleText:(id)arg2 groupId:(id)arg3 friendmoji:(id)arg4 tapActionModel:(id)arg5 longPressActionModel:(id)arg6 avatarTapActionModel:(id)arg7 shouldShowSeparatorLine:(_Bool)arg8;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
- (_Bool)preferFasterCoding;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool shouldShowSeparatorLine; // @synthesize shouldShowSeparatorLine=_shouldShowSeparatorLine;
@property(readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


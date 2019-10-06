//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandPreRenderingAssetsStructured-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUUnlockablesOndemandPreRenderingAssetsStructured : NSObject <SOJUUnlockablesOndemandPreRenderingAssetsStructured>
{
    NSString *_templateId;
    NSString *_categoryId;
    NSString *_platform;
    NSString *_imagePngBase64;
    NSArray *_textBoxArray;
    NSArray *_imageBoxArray;
    NSArray *_stickerBoxArray;
    NSString *_templateInstanceId;
    NSString *_productType;
    NSNumber *_userCanMakePayments;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *imageBoxArray; // @synthesize imageBoxArray=_imageBoxArray;
@property(readonly, copy, nonatomic) NSString *imagePngBase64; // @synthesize imagePngBase64=_imagePngBase64;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTemplateId:(id)arg1 categoryId:(id)arg2 platform:(id)arg3 imagePngBase64:(id)arg4 textBoxArray:(id)arg5 imageBoxArray:(id)arg6 stickerBoxArray:(id)arg7 templateInstanceId:(id)arg8 productType:(id)arg9 userCanMakePayments:(id)arg10;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (long long)platformEnum;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
- (long long)productTypeEnum;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *stickerBoxArray; // @synthesize stickerBoxArray=_stickerBoxArray;
@property(readonly, copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(readonly, copy, nonatomic) NSString *templateInstanceId; // @synthesize templateInstanceId=_templateInstanceId;
@property(readonly, copy, nonatomic) NSArray *textBoxArray; // @synthesize textBoxArray=_textBoxArray;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *userCanMakePayments; // @synthesize userCanMakePayments=_userCanMakePayments;
- (_Bool)userCanMakePaymentsValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


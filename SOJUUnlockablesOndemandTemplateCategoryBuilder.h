//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SOJUUnlockablesOndemandTemplateList;

@interface SOJUUnlockablesOndemandTemplateCategoryBuilder : NSObject
{
    NSString *_idValue;
    NSString *_name;
    NSString *_imageUrl;
    SOJUUnlockablesOndemandTemplateList *_templates;
    NSString *_productType;
    NSNumber *_isClassicLens;
}

+ (id)withJUUnlockablesOndemandTemplateCategory:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setIdValue:(id)arg1;
- (id)setImageUrl:(id)arg1;
- (id)setIsClassicLens:(id)arg1;
- (id)setIsClassicLensValue:(_Bool)arg1;
- (id)setName:(id)arg1;
- (id)setProductType:(id)arg1;
- (id)setProductTypeEnum:(long long)arg1;
- (id)setTemplates:(id)arg1;

@end


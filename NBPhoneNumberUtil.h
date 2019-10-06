//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSRegularExpression, NSString;

@interface NBPhoneNumberUtil : NSObject
{
    NSString *_VALID_PUNCTUATION;
    NSString *_VALID_DIGITS_STRING;
    NSString *_PLUS_CHARS_;
    NSString *_REGION_CODE_FOR_NON_GEO_ENTITY;
    NSDictionary *_DIGIT_MAPPINGS;
    NSDictionary *_coreMetaData;
    NSRegularExpression *_PLUS_CHARS_PATTERN;
    NSRegularExpression *_CAPTURING_DIGIT_PATTERN;
    NSRegularExpression *_VALID_ALPHA_PHONE_PATTERN_;
    NSString *_LEADING_PLUS_CHARS_PATTERN_;
    NSString *_EXTN_PATTERN_;
    NSString *_SEPARATOR_PATTERN_;
    NSString *_VALID_PHONE_NUMBER_PATTERN_;
    NSString *_VALID_START_CHAR_PATTERN_;
    NSString *_UNWANTED_END_CHAR_PATTERN_;
    NSString *_SECOND_NUMBER_START_PATTERN_;
    NSDictionary *_ALPHA_MAPPINGS_;
    NSDictionary *_ALL_NORMALIZATION_MAPPINGS_;
    NSDictionary *_DIALLABLE_CHAR_MAPPINGS_;
    NSDictionary *_ALL_PLUS_NUMBER_GROUPING_SYMBOLS_;
    NSMutableDictionary *_mapCCode2CN;
    NSMutableDictionary *_mapCN2CCode;
    NSMutableDictionary *_i18nNumberFormat;
    NSMutableDictionary *_i18nPhoneNumberDesc;
    NSMutableDictionary *_i18nPhoneMetadata;
}

+ (id)sharedInstance;
+ (id)stringByTrimming:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *ALL_NORMALIZATION_MAPPINGS_; // @synthesize ALL_NORMALIZATION_MAPPINGS_=_ALL_NORMALIZATION_MAPPINGS_;
@property(readonly, nonatomic) NSDictionary *ALL_PLUS_NUMBER_GROUPING_SYMBOLS_; // @synthesize ALL_PLUS_NUMBER_GROUPING_SYMBOLS_=_ALL_PLUS_NUMBER_GROUPING_SYMBOLS_;
@property(readonly, nonatomic) NSDictionary *ALPHA_MAPPINGS_; // @synthesize ALPHA_MAPPINGS_=_ALPHA_MAPPINGS_;
@property(readonly, nonatomic) NSRegularExpression *CAPTURING_DIGIT_PATTERN; // @synthesize CAPTURING_DIGIT_PATTERN=_CAPTURING_DIGIT_PATTERN;
@property(readonly, nonatomic) NSDictionary *DIALLABLE_CHAR_MAPPINGS_; // @synthesize DIALLABLE_CHAR_MAPPINGS_=_DIALLABLE_CHAR_MAPPINGS_;
@property(readonly, nonatomic) NSDictionary *DIGIT_MAPPINGS; // @synthesize DIGIT_MAPPINGS=_DIGIT_MAPPINGS;
@property(readonly, nonatomic) NSString *EXTN_PATTERN_; // @synthesize EXTN_PATTERN_=_EXTN_PATTERN_;
@property(readonly, nonatomic) NSString *LEADING_PLUS_CHARS_PATTERN_; // @synthesize LEADING_PLUS_CHARS_PATTERN_=_LEADING_PLUS_CHARS_PATTERN_;
@property(readonly, nonatomic) NSString *PLUS_CHARS_; // @synthesize PLUS_CHARS_=_PLUS_CHARS_;
@property(readonly, nonatomic) NSRegularExpression *PLUS_CHARS_PATTERN; // @synthesize PLUS_CHARS_PATTERN=_PLUS_CHARS_PATTERN;
@property(readonly, nonatomic) NSString *REGION_CODE_FOR_NON_GEO_ENTITY; // @synthesize REGION_CODE_FOR_NON_GEO_ENTITY=_REGION_CODE_FOR_NON_GEO_ENTITY;
@property(readonly, nonatomic) NSString *SECOND_NUMBER_START_PATTERN_; // @synthesize SECOND_NUMBER_START_PATTERN_=_SECOND_NUMBER_START_PATTERN_;
@property(readonly, nonatomic) NSString *SEPARATOR_PATTERN_; // @synthesize SEPARATOR_PATTERN_=_SEPARATOR_PATTERN_;
@property(readonly, nonatomic) NSString *UNWANTED_END_CHAR_PATTERN_; // @synthesize UNWANTED_END_CHAR_PATTERN_=_UNWANTED_END_CHAR_PATTERN_;
@property(readonly, nonatomic) NSRegularExpression *VALID_ALPHA_PHONE_PATTERN_; // @synthesize VALID_ALPHA_PHONE_PATTERN_=_VALID_ALPHA_PHONE_PATTERN_;
@property(readonly, nonatomic) NSString *VALID_DIGITS_STRING; // @synthesize VALID_DIGITS_STRING=_VALID_DIGITS_STRING;
@property(readonly, nonatomic) NSString *VALID_PHONE_NUMBER_PATTERN_; // @synthesize VALID_PHONE_NUMBER_PATTERN_=_VALID_PHONE_NUMBER_PATTERN_;
@property(readonly, nonatomic) NSString *VALID_PUNCTUATION; // @synthesize VALID_PUNCTUATION=_VALID_PUNCTUATION;
@property(readonly, nonatomic) NSString *VALID_START_CHAR_PATTERN_; // @synthesize VALID_START_CHAR_PATTERN_=_VALID_START_CHAR_PATTERN_;
- (void)buildNationalNumberForParsing:(id)arg1 nationalNumber:(id *)arg2;
- (_Bool)canBeInternationallyDialled:(id)arg1;
- (_Bool)canBeInternationallyDialled:(id)arg1 error:(id *)arg2;
- (_Bool)checkRegionForParsing:(id)arg1 defaultRegion:(id)arg2;
- (id)chooseFormattingPatternForNumber:(id)arg1 nationalNumber:(id)arg2;
- (void)clearCC2CN;
- (void)clearCN2CC;
- (id)componentsSeparatedByRegex:(id)arg1 regex:(id)arg2;
- (id)convertAlphaCharactersInNumber:(id)arg1;
@property(readonly, nonatomic) NSDictionary *coreMetaData; // @synthesize coreMetaData=_coreMetaData;
- (id)countryCodeFromRegionCode:(id)arg1;
- (void)dealloc;
- (unsigned int)extractCountryCode:(id)arg1 nationalNumber:(id *)arg2;
- (id)extractPossibleNumber:(id)arg1;
- (id)format:(id)arg1 numberFormat:(int)arg2;
- (id)format:(id)arg1 numberFormat:(int)arg2 error:(id *)arg3;
- (id)formatByPattern:(id)arg1 numberFormat:(int)arg2 userDefinedFormats:(id)arg3;
- (id)formatByPattern:(id)arg1 numberFormat:(int)arg2 userDefinedFormats:(id)arg3 error:(id *)arg4;
- (id)formatInOriginalFormat:(id)arg1 regionCallingFrom:(id)arg2;
- (id)formatInOriginalFormat:(id)arg1 regionCallingFrom:(id)arg2 error:(id *)arg3;
- (id)formatNationalNumberWithCarrierCode:(id)arg1 carrierCode:(id)arg2;
- (id)formatNationalNumberWithCarrierCode:(id)arg1 carrierCode:(id)arg2 error:(id *)arg3;
- (id)formatNationalNumberWithPreferredCarrierCode:(id)arg1 fallbackCarrierCode:(id)arg2;
- (id)formatNationalNumberWithPreferredCarrierCode:(id)arg1 fallbackCarrierCode:(id)arg2 error:(id *)arg3;
- (id)formatNsn:(id)arg1 metadata:(id)arg2 phoneNumberFormat:(int)arg3 carrierCode:(id)arg4;
- (id)formatNsnUsingPattern:(id)arg1 formattingPattern:(id)arg2 numberFormat:(int)arg3 carrierCode:(id)arg4;
- (id)formatNumberForMobileDialing:(id)arg1 regionCallingFrom:(id)arg2 withFormatting:(_Bool)arg3;
- (id)formatNumberForMobileDialing:(id)arg1 regionCallingFrom:(id)arg2 withFormatting:(_Bool)arg3 error:(id *)arg4;
- (id)formatOutOfCountryCallingNumber:(id)arg1 regionCallingFrom:(id)arg2;
- (id)formatOutOfCountryCallingNumber:(id)arg1 regionCallingFrom:(id)arg2 error:(id *)arg3;
- (id)formatOutOfCountryKeepingAlphaChars:(id)arg1 regionCallingFrom:(id)arg2;
- (id)formatOutOfCountryKeepingAlphaChars:(id)arg1 regionCallingFrom:(id)arg2 error:(id *)arg3;
- (_Bool)formattingRuleHasFirstGroupOnly:(id)arg1;
- (unsigned int)getCountryCodeForRegion:(id)arg1;
- (unsigned int)getCountryCodeForValidRegion:(id)arg1;
- (unsigned int)getCountryCodeForValidRegion:(id)arg1 error:(id *)arg2;
- (id)getExampleNumber:(id)arg1;
- (id)getExampleNumber:(id)arg1 error:(id *)arg2;
- (id)getExampleNumberForNonGeoEntity:(unsigned int)arg1;
- (id)getExampleNumberForNonGeoEntity:(unsigned int)arg1 error:(id *)arg2;
- (id)getExampleNumberForType:(id)arg1 type:(int)arg2;
- (id)getExampleNumberForType:(id)arg1 type:(int)arg2 error:(id *)arg3;
- (long long)getLengthOfGeographicalAreaCode:(id)arg1;
- (long long)getLengthOfGeographicalAreaCode:(id)arg1 error:(id *)arg2;
- (long long)getLengthOfNationalDestinationCode:(id)arg1;
- (long long)getLengthOfNationalDestinationCode:(id)arg1 error:(id *)arg2;
- (id)getMetadataForNonGeographicalRegion:(unsigned int)arg1;
- (id)getMetadataForRegion:(id)arg1;
- (id)getMetadataForRegionOrCallingCode:(unsigned int)arg1 regionCode:(id)arg2;
- (id)getNationalSignificantNumber:(id)arg1;
- (id)getNddPrefixForRegion:(id)arg1 stripNonDigits:(_Bool)arg2;
- (id)getNumberDescByType:(id)arg1 type:(int)arg2;
- (int)getNumberType:(id)arg1;
- (int)getNumberTypeHelper:(id)arg1 metadata:(id)arg2;
- (id)getRegionCodeForCountryCode:(unsigned int)arg1;
- (id)getRegionCodeForNumber:(id)arg1;
- (id)getRegionCodeForNumberFromRegionList:(id)arg1 regionCodes:(id)arg2;
- (id)getRegionCodesForCountryCode:(unsigned int)arg1;
- (_Bool)hasFormattingPatternForNumber:(id)arg1;
- (_Bool)hasUnexpectedItalianLeadingZero:(id)arg1;
- (_Bool)hasValidCountryCallingCode:(unsigned int)arg1;
- (_Bool)hasValue:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *i18nNumberFormat; // @synthesize i18nNumberFormat=_i18nNumberFormat;
@property(retain, nonatomic) NSMutableDictionary *i18nPhoneMetadata; // @synthesize i18nPhoneMetadata=_i18nPhoneMetadata;
@property(retain, nonatomic) NSMutableDictionary *i18nPhoneNumberDesc; // @synthesize i18nPhoneNumberDesc=_i18nPhoneNumberDesc;
- (long long)indexOfStringByString:(id)arg1 target:(id)arg2;
- (id)init;
- (void)initCC2CN;
- (void)initNormalizationMappings;
- (void)initRegularExpressionSet;
- (_Bool)isAlphaNumber:(id)arg1;
- (_Bool)isLeadingZeroPossible:(unsigned int)arg1;
- (_Bool)isNANPACountry:(id)arg1;
- (_Bool)isNaN:(id)arg1;
- (_Bool)isNationalNumberSuffixOfTheOther:(id)arg1 second:(id)arg2;
- (_Bool)isNumberGeographical:(id)arg1;
- (int)isNumberMatch:(id)arg1 second:(id)arg2;
- (int)isNumberMatch:(id)arg1 second:(id)arg2 error:(id *)arg3;
- (_Bool)isNumberMatchingDesc:(id)arg1 numberDesc:(id)arg2;
- (_Bool)isPossibleNumber:(id)arg1;
- (_Bool)isPossibleNumber:(id)arg1 error:(id *)arg2;
- (_Bool)isPossibleNumberString:(id)arg1 regionDialingFrom:(id)arg2;
- (_Bool)isPossibleNumberString:(id)arg1 regionDialingFrom:(id)arg2 error:(id *)arg3;
- (int)isPossibleNumberWithReason:(id)arg1;
- (int)isPossibleNumberWithReason:(id)arg1 error:(id *)arg2;
- (_Bool)isStartingStringByRegex:(id)arg1 regex:(id)arg2;
- (_Bool)isValidNumber:(id)arg1;
- (_Bool)isValidNumberForRegion:(id)arg1 regionCode:(id)arg2;
- (_Bool)isValidRegionCode:(id)arg1;
- (_Bool)isViablePhoneNumber:(id)arg1;
- (id)loadMetadata:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *mapCCode2CN; // @synthesize mapCCode2CN=_mapCCode2CN;
@property(retain, nonatomic) NSMutableDictionary *mapCN2CCode; // @synthesize mapCN2CCode=_mapCN2CCode;
- (id)matcheFirstByRegex:(id)arg1 regex:(id)arg2;
- (id)matchedStringByRegex:(id)arg1 regex:(id)arg2;
- (id)matchesByRegex:(id)arg1 regex:(id)arg2;
- (_Bool)matchesEntirely:(id)arg1 string:(id)arg2;
- (unsigned int)maybeExtractCountryCode:(id)arg1 metadata:(id)arg2 nationalNumber:(id *)arg3 keepRawInput:(_Bool)arg4 phoneNumber:(id *)arg5;
- (unsigned int)maybeExtractCountryCode:(id)arg1 metadata:(id)arg2 nationalNumber:(id *)arg3 keepRawInput:(_Bool)arg4 phoneNumber:(id *)arg5 error:(id *)arg6;
- (id)maybeGetFormattedExtension:(id)arg1 metadata:(id)arg2 numberFormat:(int)arg3;
- (id)maybeStripExtension:(id *)arg1;
- (int)maybeStripInternationalPrefixAndNormalize:(id *)arg1 possibleIddPrefix:(id)arg2;
- (int)maybeStripInternationalPrefixAndNormalize:(id *)arg1 possibleIddPrefix:(id)arg2 error:(id *)arg3;
- (_Bool)maybeStripNationalPrefixAndCarrierCode:(id *)arg1 metadata:(id)arg2 carrierCode:(id *)arg3;
- (_Bool)maybeStripNationalPrefixAndCarrierCode:(id *)arg1 metadata:(id)arg2 carrierCode:(id *)arg3 error:(id *)arg4;
- (id)normalizeDigitsOnly:(id)arg1;
- (id)normalizeHelper:(id)arg1 normalizationReplacements:(id)arg2 removeNonMatches:(_Bool)arg3;
- (id)normalizePhoneNumber:(id)arg1;
- (void)normalizeSB:(id *)arg1;
- (id)parse:(id)arg1 defaultRegion:(id)arg2;
- (id)parse:(id)arg1 defaultRegion:(id)arg2 error:(id *)arg3;
- (id)parseAndKeepRawInput:(id)arg1 defaultRegion:(id)arg2;
- (id)parseAndKeepRawInput:(id)arg1 defaultRegion:(id)arg2 error:(id *)arg3;
- (id)parseHelper:(id)arg1 defaultRegion:(id)arg2 keepRawInput:(_Bool)arg3 checkRegion:(_Bool)arg4;
- (id)parseHelper:(id)arg1 defaultRegion:(id)arg2 keepRawInput:(_Bool)arg3 checkRegion:(_Bool)arg4 error:(id *)arg5;
- (_Bool)parsePrefixAsIdd:(id)arg1 sourceString:(id *)arg2;
- (id)parseWithPhoneCarrierRegion:(id)arg1 error:(id *)arg2;
- (id)prefixNumberWithCountryCallingCode:(unsigned int)arg1 phoneNumberFormat:(int)arg2 formattedNationalNumber:(id)arg3 formattedExtension:(id)arg4;
- (_Bool)rawInputContainsNationalPrefix:(id)arg1 nationalPrefix:(id)arg2 regionCode:(id)arg3;
- (id)regionCodeFromCountryCode:(unsigned int)arg1;
- (id)replaceFirstStringByRegex:(id)arg1 regex:(id)arg2 withTemplate:(id)arg3;
- (id)replaceStringByRegex:(id)arg1 regex:(id)arg2 withTemplate:(id)arg3;
- (id)stringByReplacingOccurrencesString:(id)arg1 withMap:(id)arg2 removeNonMatches:(_Bool)arg3;
- (long long)stringPositionByRegex:(id)arg1 regex:(id)arg2;
- (int)testNumberLengthAgainstPattern:(id)arg1 number:(id)arg2;
- (_Bool)truncateTooLongNumber:(id)arg1;
- (_Bool)truncateTooLongNumber:(id)arg1 error:(id *)arg2;

@end


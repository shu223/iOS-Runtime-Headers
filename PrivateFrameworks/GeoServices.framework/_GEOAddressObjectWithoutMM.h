/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOAddressObjectWithoutMM : NSObject <GEOAddressObjectProtocol> {
    NSString * _country;
    unsigned int  _hash;
    NSString * _language;
    NSString * _phoneticLocale;
    GEOPDAddress * _placeDataAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasKnownAccuracy;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int knownAccuracy;
@property (readonly) Class superclass;

+ (id)libraryVersion;

- (id)address;
- (id)addressDictionary;
- (id)cityDisplayNameWithFallback:(BOOL)arg1;
- (void)dealloc;
- (id)fullAddressWithMultiline:(BOOL)arg1;
- (BOOL)hasKnownAccuracy;
- (unsigned int)hash;
- (id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (int)knownAccuracy;
- (id)name;
- (id)parkingDisplayName;
- (id)phoneticAddress;
- (id)phoneticLocaleIdentifier;
- (id)phoneticName;
- (id)rawBytes;
- (id)shortAddress;
- (id)spokenAddress;
- (id)spokenAddressForLocale:(id)arg1;
- (id)spokenName;
- (id)spokenStructuredAddress;
- (id)titlesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)weatherDisplayName;

@end

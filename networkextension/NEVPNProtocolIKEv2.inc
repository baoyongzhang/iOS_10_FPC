{ Parsed from NetworkExtension.framework NEVPNProtocolIKEv2.h }

{$ifdef TYPES}
type
  NEVPNIKEv2SecurityAssociationParametersPtr = ^NEVPNIKEv2SecurityAssociationParameters;
  NEVPNProtocolIKEv2Ptr = ^NEVPNProtocolIKEv2;
{$endif}

{$ifdef TYPES}
type
  NEVPNIKEv2EncryptionAlgorithm = NSInteger;
  NEVPNIKEv2EncryptionAlgorithmPtr = ^NEVPNIKEv2EncryptionAlgorithm;

const
  NEVPNIKEv2EncryptionAlgorithmDES = 1;
  NEVPNIKEv2EncryptionAlgorithm3DES = 2;
  NEVPNIKEv2EncryptionAlgorithmAES128 = 3;
  NEVPNIKEv2EncryptionAlgorithmAES256 = 4;
  NEVPNIKEv2EncryptionAlgorithmAES128GCM = 5 { available in 10_11, 8_3 };
  NEVPNIKEv2EncryptionAlgorithmAES256GCM = 6 { available in 10_11, 8_3 };

type
  NEVPNIKEv2IntegrityAlgorithm = NSInteger;
  NEVPNIKEv2IntegrityAlgorithmPtr = ^NEVPNIKEv2IntegrityAlgorithm;

const
  NEVPNIKEv2IntegrityAlgorithmSHA96 = 1;
  NEVPNIKEv2IntegrityAlgorithmSHA160 = 2;
  NEVPNIKEv2IntegrityAlgorithmSHA256 = 3;
  NEVPNIKEv2IntegrityAlgorithmSHA384 = 4;
  NEVPNIKEv2IntegrityAlgorithmSHA512 = 5;

type
  NEVPNIKEv2DeadPeerDetectionRate = NSInteger;
  NEVPNIKEv2DeadPeerDetectionRatePtr = ^NEVPNIKEv2DeadPeerDetectionRate;

const
  NEVPNIKEv2DeadPeerDetectionRateNone = 0;
  NEVPNIKEv2DeadPeerDetectionRateLow = 1;
  NEVPNIKEv2DeadPeerDetectionRateMedium = 2;
  NEVPNIKEv2DeadPeerDetectionRateHigh = 3;

type
  NEVPNIKEv2DiffieHellmanGroup = NSInteger;
  NEVPNIKEv2DiffieHellmanGroupPtr = ^NEVPNIKEv2DiffieHellmanGroup;

const
  NEVPNIKEv2DiffieHellmanGroupInvalid = 0;
  NEVPNIKEv2DiffieHellmanGroup1 = 1;
  NEVPNIKEv2DiffieHellmanGroup2 = 2;
  NEVPNIKEv2DiffieHellmanGroup5 = 5;
  NEVPNIKEv2DiffieHellmanGroup14 = 14;
  NEVPNIKEv2DiffieHellmanGroup15 = 15;
  NEVPNIKEv2DiffieHellmanGroup16 = 16;
  NEVPNIKEv2DiffieHellmanGroup17 = 17;
  NEVPNIKEv2DiffieHellmanGroup18 = 18;
  NEVPNIKEv2DiffieHellmanGroup19 = 19;
  NEVPNIKEv2DiffieHellmanGroup20 = 20;
  NEVPNIKEv2DiffieHellmanGroup21 = 21;

type
  NEVPNIKEv2CertificateType = NSInteger;
  NEVPNIKEv2CertificateTypePtr = ^NEVPNIKEv2CertificateType;

const
  NEVPNIKEv2CertificateTypeRSA = 1;
  NEVPNIKEv2CertificateTypeECDSA256 = 2;
  NEVPNIKEv2CertificateTypeECDSA384 = 3;
  NEVPNIKEv2CertificateTypeECDSA521 = 4;
{$endif}

{$ifdef CLASSES}

type
  NEVPNIKEv2SecurityAssociationParameters = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setEncryptionAlgorithm(newValue: NEVPNIKEv2EncryptionAlgorithm); message 'setEncryptionAlgorithm:';
    function encryptionAlgorithm: NEVPNIKEv2EncryptionAlgorithm; message 'encryptionAlgorithm';
    procedure setIntegrityAlgorithm(newValue: NEVPNIKEv2IntegrityAlgorithm); message 'setIntegrityAlgorithm:';
    function integrityAlgorithm: NEVPNIKEv2IntegrityAlgorithm; message 'integrityAlgorithm';
    procedure setDiffieHellmanGroup(newValue: NEVPNIKEv2DiffieHellmanGroup); message 'setDiffieHellmanGroup:';
    function diffieHellmanGroup: NEVPNIKEv2DiffieHellmanGroup; message 'diffieHellmanGroup';
    procedure setLifetimeMinutes(newValue: cint32); message 'setLifetimeMinutes:';
    function lifetimeMinutes: cint32; message 'lifetimeMinutes';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NEVPNProtocolIKEv2 = objcclass external (NEVPNProtocolIPSec)
  public
    procedure setDeadPeerDetectionRate(newValue: NEVPNIKEv2DeadPeerDetectionRate); message 'setDeadPeerDetectionRate:';
    function deadPeerDetectionRate: NEVPNIKEv2DeadPeerDetectionRate; message 'deadPeerDetectionRate';
    procedure setServerCertificateIssuerCommonName(newValue: NSString); message 'setServerCertificateIssuerCommonName:';
    function serverCertificateIssuerCommonName: NSString; message 'serverCertificateIssuerCommonName';
    procedure setServerCertificateCommonName(newValue: NSString); message 'setServerCertificateCommonName:';
    function serverCertificateCommonName: NSString; message 'serverCertificateCommonName';
    procedure setCertificateType(newValue: NEVPNIKEv2CertificateType); message 'setCertificateType:';
    function certificateType: NEVPNIKEv2CertificateType; message 'certificateType';
    procedure setUseConfigurationAttributeInternalIPSubnet(newValue: boolean); message 'setUseConfigurationAttributeInternalIPSubnet:';
    function useConfigurationAttributeInternalIPSubnet: boolean; message 'useConfigurationAttributeInternalIPSubnet';
    function IKESecurityAssociationParameters: NEVPNIKEv2SecurityAssociationParameters; message 'IKESecurityAssociationParameters';
    function childSecurityAssociationParameters: NEVPNIKEv2SecurityAssociationParameters; message 'childSecurityAssociationParameters';
    procedure setDisableMOBIKE(newValue: boolean); message 'setDisableMOBIKE:';
    function disableMOBIKE: boolean; message 'disableMOBIKE';
    procedure setDisableRedirect(newValue: boolean); message 'setDisableRedirect:';
    function disableRedirect: boolean; message 'disableRedirect';
    procedure setEnablePFS(newValue: boolean); message 'setEnablePFS:';
    function enablePFS: boolean; message 'enablePFS';
    procedure setEnableRevocationCheck(newValue: boolean); message 'setEnableRevocationCheck:';
    function enableRevocationCheck: boolean; message 'enableRevocationCheck';
    procedure setStrictRevocationCheck(newValue: boolean); message 'setStrictRevocationCheck:';
    function strictRevocationCheck: boolean; message 'strictRevocationCheck';
  end;
{$endif}


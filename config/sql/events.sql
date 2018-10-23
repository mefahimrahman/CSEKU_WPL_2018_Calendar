-- phpMyAdmin SQL Dump
-- version 4.7.9
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: Oct 22, 2018 at 07:36 PM
-- Server version: 5.7.21
-- PHP Version: 5.6.35

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `cseku`
--

-- --------------------------------------------------------

--
-- Table structure for table `events`
--

DROP TABLE IF EXISTS `events`;
CREATE TABLE IF NOT EXISTS `events` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `title` varchar(255) NOT NULL,
  `start_event` datetime NOT NULL,
  `end_event` datetime NOT NULL,
  `discipline` varchar(40) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=31 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `events`
--

INSERT INTO `events` (`id`, `title`, `start_event`, `end_event`, `discipline`) VALUES
(1, 'Sworoshoti Puja', '2018-01-22 00:00:00', '2018-01-22 23:59:00', '0'),
(2, 'Mother Language Day', '2018-02-21 00:00:00', '2018-02-21 23:59:00', '0'),
(3, 'Sheikh Mujibur Rahman\'s Birthday', '2018-03-17 00:00:00', '2018-03-17 23:59:00', '0'),
(4, 'Independence Day', '2018-03-26 00:00:00', '2018-03-26 23:59:00', '0'),
(5, 'Bangla New Year', '2018-04-14 00:00:00', '2018-04-14 23:59:00', '0'),
(6, 'Shab-e-Meraj', '2018-04-15 00:00:00', '2018-04-15 23:59:00', '0'),
(7, 'Buddha Purnima', '2018-04-29 00:00:00', '2018-04-29 23:59:00', '0'),
(8, 'May Day', '2018-05-01 00:00:00', '2018-05-01 23:59:00', '0'),
(9, 'Shab-e-Barat', '2018-05-02 00:00:00', '2018-05-02 23:59:00', '0'),
(10, 'Eid-ul-Fitar', '2018-06-10 00:00:00', '2018-06-21 23:59:00', '0'),
(11, 'National Mourn Day', '2018-08-15 00:00:00', '2018-08-15 23:00:00', '0'),
(12, 'Eid-ul-Azha', '2018-08-19 00:00:00', '2018-08-30 23:59:00', '0'),
(13, 'Jonastomi', '2018-09-02 00:00:00', '2018-09-02 23:59:00', '0'),
(14, 'Muhorrom', '2018-09-21 00:00:00', '2018-09-21 23:59:00', '0'),
(15, 'Durga Puja', '2018-10-14 00:00:00', '2018-10-18 23:59:00', '0'),
(16, 'Akheri Chaahr Somba', '2018-11-07 00:00:00', '2018-11-07 23:59:00', '0'),
(17, 'Eid-e-Miladunnobi', '2018-11-21 00:00:00', '2018-11-21 23:59:00', '0'),
(18, 'Buddhijibi Day', '2018-12-14 00:00:00', '2018-12-14 23:59:00', '0'),
(19, 'Fateha-e-Yajdaham', '2018-12-19 00:00:00', '2018-12-19 23:59:00', '0'),
(20, 'X-mas Day', '2018-12-25 00:00:00', '2018-12-25 23:59:00', '0'),
(21, 'Term - 1 Registration', '2018-01-01 00:00:00', '2018-01-11 05:00:00', '0'),
(22, 'Term - 1 PL', '2018-04-12 05:00:00', '2018-04-24 23:59:00', '0'),
(23, 'Term - 2 Registration', '2018-07-01 00:00:00', '2018-07-12 00:00:00', '0'),
(24, 'Term - 2 PL', '2018-10-28 00:00:00', '2018-11-08 00:00:00', '0'),
(25, 'Term -1 Registration ', '2019-01-01 00:00:00', '2018-10-15 00:00:00', '0'),
(26, 'wpl final lab', '2018-10-23 10:50:00', '2018-10-23 13:20:00', '2'),
(27, 'se final lab', '2018-10-24 10:50:00', '2018-10-24 13:20:00', '{ffdb1cb8-af34-4381-8971-9784dcb516c5}'),
(28, 'arch 3200 viva', '2018-10-24 14:30:00', '2018-10-24 17:00:00', '{560a0fc0-6221-497d-8d41-e584ee4bbee3}'),
(29, 'CA CT - 03', '2018-10-23 09:40:00', '2018-10-23 10:30:00', '{ffdb1cb8-af34-4381-8971-9784dcb516c5}'),
(30, 'arch 3201 ct - 03', '2018-10-25 12:30:00', '2018-10-25 13:20:00', '{560a0fc0-6221-497d-8d41-e584ee4bbee3}');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
